#include <stdio.h>
#include "queue.h"
#include "point.h"
#include "map.h"
#include "types.h"

int main(int argc, char * argv[]){
    int nFil, nCol, i, j;
    char symbol;
    Stack *s = NULL;
    Point *pAUX = point_ini()
    Point *pOutput = point_ini();
    Map *map = map_ini();
    FILE *fp = fopen("argv[1]", "r+");
    fscanf(fp, "%d %d", &nFil, &nCol);
    map_setSize(map, nFil, nCol);
    
    for(i=0; i<nFil; i++){
        for(j=0; i<nCol; j++){
            fscanf(fp, "%s", symbol);
            point_setCoordinateX(pAux, i);
            point_setCoordinateY(pAux, j);
            point_setSymbol(pAux, symbol);
            map_setPoint(map, pAux);
        }
    }
    
    pAux = map_getInput(map);
    pOtput = deep_search_cola(map, pAux);
    pAux = map_getOutput(map);
    if(point_equals(pAux, pOutput){
        printf("Existe un camino");
        for(s=stack_ini(); pAux->parent!=NULL;){
            stack_push(s, pAux);
            pAux = point_copy_all(pAux->parent);
        }
        stack_print(fp, s);
    }
    else printf("No existe un camino");
    return 1;
}
