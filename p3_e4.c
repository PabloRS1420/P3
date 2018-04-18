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
    int x;
    int j[100]
    
    while(fgets(j, 100, fp)) {
         x = atol(token);
         token = strtok(NULL, " ");
         if(x%2 == 0) list_insertFirst(list1, x);
         else list_insertLast(list1, x);
    }
    
    
