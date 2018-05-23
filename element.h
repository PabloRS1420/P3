#ifndef ELEMENT_H
#define ELEMENT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "point.h"
#include "types.h"

typedef struct _Element Element;

Element *element_ini();
void element_destroy(Element *e);
Status element_setInfo(Element *e, Point *p);
Point element_getInfo(Element *e);
Element *element_copy(const Element *e);
Bool element_equals(const Element *e1, const Element *e2);
int element_print(FILE *f, const Element *e);

#endif
