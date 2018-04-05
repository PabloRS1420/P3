#include <stdio.h>
#include <stdlib.h>
#include "point.h"
#include "types.h"

struct _Point{
    int x;
    int y;
    char symbol;
};

Point *point_ini(int x, int y, char s){
    if (x<0 || y<0 || (s != 'I' && s != 'o' && s != '+' && s != ' ')){
        return NULL;
    }
    
    Point *p = NULL;
    p=(Point *)malloc(sizeof(Point));
    if (!p){
        return NULL;
    }
    
    p->x = x;
    p->y = y;
    p->symbol = s;
    
    return p;
}

void point_destroy(Point *p){
    if (p) free (p);
}

int point_getCoordinateX(const Point *p){
    if (p){
        return p->x;
    }
}

int point_getCoordinateY(const Point *p){
    if (p){
        return p->y;
    }
}

char point_getSymbol(const Point *p){
    if (p){
        return p->symbol;
    }
}

Bool point_isInput(Point *p){	
    if (point_getSymbol(p)=='I'){ 
        return TRUE;
    }
    else{ 
        return FALSE;
    }
}

Bool point_isOutput(Point *p){
    if (point_getSymbol(p)=='o'){ 
        return TRUE;
    }
    else{
        return FALSE;
    }
}

Bool point_isBarrier(Point *p) {
    if (point_getSymbol(p)=='+'){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

Bool point_isSpace(Point *p){
    if (point_getSymbol(p) == ' '){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

Status point_setCoordinateX(Point *p, const int x){
    if (x<0){
        return ERROR;
    }
    p->x = x;
    
    return OK;
}

Status point_setCoordinateY(Point *p, const int y) {
    if (y<0){
        return ERROR;
    }
    p->y=y;
    
    return OK;
}

Status point_setSymbol(Point *p, const char s){
    if (s != 'I' || s != 'o' || s != '+' || s != ' '){
        return ERROR;
    }
    p->symbol = s;

    return OK;
}

Bool point_equals(const Point *p1,const Point *p2){
    if (p1 == NULL || p2 == NULL){
        return FALSE;
    }
    
    if ((point_getSymbol(p1) == point_getSymbol(p2)) && (point_getCoordinateX(p1) == point_getCoordinateX(p2)) && (point_getCoordinateY(p1) == point_getCoordinateY(p2))){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

Point *point_copy(const Point *p) {
    if(!p){
        return NULL;
    }
    
    Point *pcopy = NULL;
    
    pcopy = point_ini(point_getCoordinateX(p),point_getCoordinateY(p),point_getSymbol(p));
    
    return pcopy;
}

int point_print(FILE *f, const Point *p){
    return fprintf(f, "[(%d,%d): %c]\n", point_getCoordinateX(p), point_getCoordinateY(p), point_getSymbol(p));
}


