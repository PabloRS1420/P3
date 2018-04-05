#include <stdio.h>
#include <stdlib.h>
#include "element.h"
#include "point.h"
#include "types.h"


struct _Element { 
    Point *info; 
};

Element *element_ini(){
    Element *e;
    e = (Element *) malloc(siceof(Element));
    if(!e) return NULL;
    
    return s;
}

void element_destroy(Element *e){
    if(e) point_destroy(e->info);
}

Status element_setInfo(Element *e, Point *p){
    if(!e) return ERROR;
    
    e->info=point_copy(p);
    return OK;
}

Point *element_getInfo(Element *e){
    if(!e) return NULL;
    
    return e->info;
}

Element *element_copy(const Element *e){
    Element *eCopy = NULL;
    eCopy = element_ini;
    if(!e_copy) return NULL;
    
    eCopy->info = point_copy(e->info);
    return eCopy;
}

Bool element_equals(const Element *e1, const Element *e2){
    if(point_equals(e1->info, e2->info)==TRUE) return TRUE;
    else return FALSE;
}

int element_print(FILE *f, const Element *e){
    return point_print(f, e->info);
}




