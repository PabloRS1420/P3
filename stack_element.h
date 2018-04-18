#ifndef STACK_ELEMENT_H
#define STACK_ELEMENT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "element.h"
#include "types.h"

typedef struct _Stack Stack;

Stack *stack_ini();
void stack_destroy(Stack *s);
Status stack_push(Stack *s, const Element *e);
Element *stack_pop(Stack *s);
Element *stack_top(const Stack *s);
Bool stack_isEmpty(const Stack *s);
Bool stack_isEmpty(const Stack *s);
int stack_print(FILE *f, const Stack *s);

#endif

