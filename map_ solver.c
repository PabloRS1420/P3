#include "map_solver.h"

Move strategy[] = { RIGHT, LEFT, UP, DOWN };

int mapsolver_stack(const char* map_file, const Move strat[4]){
    Stack *s = stack_ini();
    
