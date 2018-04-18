#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "queue.h"
#include "types.h"
#include "point.h"

int main(int argc, char * argv[]){
    printf("> ./p3_e4 datos.txt ");
    
    FILE *fp = fopen("argv[1]", "r+");
    if(fp == NULL) {
        printf("Error abriendo el archivo");
        return -1;
    }
    
    List *list1 = list_ini(destroy_elementlist_function, copy_elementlist_function, print_elementlist_function, cmp_elementlist_function_type);
    List *list2 = list_ini(destroy_elementlist_function, copy_elementlist_function, print_elementlist_function, cmp_elementlist_function_type);
    int x, i;
    int j[100]
    
    while(fgets(j, 100, fp)) {
        x = atol(token);
        token = strtok(NULL, " ");
        if(x%2 == 0) list_insertFirst(list1, x);
        else list_insertLast(list1, x);
        if(list_isEmpty(list1) == TRUE) printf("Lista vacía");
        else {
            printf("Lista con %d elementos: ", list_size(list1));
            list_print(fp, list1);
        }
    }
    
    x = list_size(list1);
    x = x/2;
    for(i=0; i<x; i++){
        list_insertInOrder(list2, list_extractFirst(list1));
        if(list_isEmpty(list1) == TRUE) printf("Lista vacía");
        else {
            printf("Lista con %d elementos: ", list_size(list1));
            list_print(fp, list1);
        }
        if(list_isEmpty(list2) == TRUE) printf("Lista 2 vacía");
        else {
            printf("Lista 2 con %d elementos: ", list_size(list2));
            list_print(fp, list2);
        }
    }
    
    while(list_isEmpty(list1) != TRUE) {
        list_insertInOrder(list2, list_extractLast(list1));
        if(list_isEmpty(list1) == TRUE) printf("Lista vacía");
        else {
            printf("Lista con %d elementos: ", list_size(list1));
            list_print(fp, list1);
        }
        if(list_isEmpty(list2) == TRUE) printf("Lista 2 vacía");
        else {
            printf("Lista 2 con %d elementos: ", list_size(list2));
            list_print(fp, list2);
        }
    }
    
    return 0;
}
        
    
    
    
