#include "functions.h"

void destroy_element_function(void *e){ 
  free((int*)e); 
} 
 
void *copy_element_function(const void *e){ 
  int * dst; 
  if (e == NULL) return NULL; 
  dst = (int*)malloc(sizeof(int)); 
  /*Copiamos el elemento*/ 
  *(dst) = *((int*)e); 
  return dst; 
} 
 
int print_element_function(FILE *f, const void *e){ 
  if (f != NULL && e != NULL) {
    return fprintf(f, "[%d]"\n, *((int*)e)); 
  }
  return -1; 
} 
