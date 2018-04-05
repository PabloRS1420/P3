#ifndef MAP_H
#define MAP_H

typedef enum { 
    RIGHT=0,  
    UP=1,  
    LEFT=2,  
    DOWN=3, 
    STAY=4 
} Move;

typedef struct _Map Map;

Map *map_ini ();
void map_destroy(Map *map);
int map_getNrows(const Map *map);
int map_getNcols(const Map *map);
Point *map_getInput(const Map *map);
Point *map_getOutput(const Map *map);
Point * map_getNeighborPoint(const Map * map, const Point *p, const Move mov);
Status map_setSize(Map *map, int row, int col);
Status map_setPoint(Map *map, const Point *p);
int map_print(FILE *f, const Map *map);
Point deep_search(Map *map, Point *p);

#endif
