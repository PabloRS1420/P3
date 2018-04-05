#include <stdio.h>
#include <stdlib.h>
#include "stack_element.h"
#include "element.h"
#include "types.h"

#define MAXSTACK 100

struct _Stack {
    int top; 
    Element *item[MAXSTACK];
};

Stack *stack_ini(){
    Stack *s = NULL;
    s = (Stack *) malloc(siceof(Stack));
    if(!s) return NULL;
    
    s.top = 0;
    return s;
}

void stack_destroy(Stack *s){
    int i;
    if(s){
        for(i=s.top; i>0; i--){
            element_destroy(s->item[i]);
        }
        free(s);
}

Status stack_push(Stack *s, const Element *p){
    if(!s || !p) return ERROR;
    
    if(pila_llena) return ERROR;
    
    s->item[s.top] = element_copy(e);
    s.top++;
    return OK;
}

Element *stack_pop(Stact *s){
    Element *e;
    if(pila_vacia==TRUE) return NULL;
    e = element_ini();
    if(!e) return NULL;
    
    e = element_copy(s->item[s.top]);
    s->item[s.top] = NULL;
    s.top--
    return e;
}

Element *stack_top(const Stact *s){
    Element *e;
    if(pila_vacia==TRUE) return NULL;
    e = element_ini();
    if(!p) return NULL;
    
    e = element_copy(s->item[s.top]);
    return e;
}

Bool stack_isEmpty(const Stack *s){
    if(s.top==0) return TRUE;
    else return FALSE;
}

Bool stack_isFULL(const Stack *s){
    if(s.top==MAXSTACK) return TRUE;
    else return FALSE;
}

int stack_print(FILE *f, const Stack *s){
    int i, j = 0;
    for(i=s.top, j=0; i>0; i--){
        j = j + element_print(f, s->item[i]);
    }
    return j;
}


    
    
    
