#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "queue.h"
#include "types.h"
#include "point.h"


int main(int argc, char * argv[]){
    printf("> ./p3_e1 puntos.txt");
    FILE *fp = fopen("argv[1]", "r+");
    if(fp == NULL) {
        printf("Error abriendo el archivo");
        return -1;
    }
    Queue *q1 = queue_ini(destroy_element_function, copy_element_function, print_element_function);
    Queue *q2 = queue_ini(destroy_element_function, copy_element_function, print_element_function);
    Queue *q3 = queue_ini(destroy_element_function, copy_element_function, print_element_function);
    Point *p = point_ini(0, 0, +);
    int i, j, x, y;
    char s, l[3];
    int z;
    char *token;
    if(queue_isEmpty(q1)) printf("Cola 1: Queue vacia.\n");
    else {
        printf("Cola 1: Cola con %d elementos:\n", queue_size(q1));
        queue_print(fp, q1);
    }
    if(queue_isEmpty(q2)) printf("Cola 2: Queue vacia.\n");
    else {
        printf("Cola 2: Cola con %d elementos:\n", queue_size(q2));
        queue_print(fp, q2);
    }
    if(queue_isEmpty(q3)) printf("Cola 3: Queue vacia.\n");
    else {
        printf("Cola 3: Cola con %d elementos:\n", queue_size(q3));
        queue_print(fp, q3);
    }
    
    fgets(z, 1, fp)
    while(fgets(l, 3, fp)) {
        x = atol(token); 
        token = strtok(NULL, ",");
        y = atol(token); 
        token = strtok(NULL, ",");
        s = atol(token);
        point_setCoordinateX(p, x);
        point_setCoordinateY(p, y);
        point_setSymbol(p, s);
        queue_insert(q1, p);
        if(queue_isEmpty(q1)) printf("Cola 1: Queue vacia.\n");
        else {
            printf("Cola 1: Cola con %d elementos:\n", queue_size(q1));
            queue_print(fp, q1);
        }
        if(queue_isEmpty(q2)) printf("Cola 2: Queue vacia.\n");
        else {
            printf("Cola 2: Cola con %d elementos:\n", queue_size(q2));
            queue_print(fp, q2);
        }
        if(queue_isEmpty(q3)) printf("Cola 3: Queue vacia.\n");
        else {
            printf("Cola 3: Cola con %d elementos:\n", queue_size(q3));
            queue_print(fp, q3);
        }
    }
    
  
}


fgets
{
strtok
sscanf
}
