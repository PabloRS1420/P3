#include "list.h"

typedef struct _NodeList {
    void* data;
    struct _NodeList* next;
} NodeList;
  
struct _List {
    NodeList* node;
    destroy_elementlist_function_type   destroy_element_function;
    copy_elementlist_function_type      copy_element_function;
    print_elementlist_function_type     print_element_function;
    cmp_elementlist_function_type       cmp_element_function;
};

List* list_ini(destroy_elementlist_function_type f1, copy_elementlist_function_type f2, 
print_elementlist_function_type f3, cmp_elementlist_function_type f4){
    List *l = NULL;
}

void list_free(List* list){
}

Status list_insertFirst(List* list, const void *elem){
}

Status list_insertLast(List* list, const void *elem){
}

Status list_insertInOrder(List *list, const void *pElem){
    Si el nodo actual es menor y el siguiente es mayor, se inserta
    Si los dos son menores, avanzas
    Si los dos son mayores, FALLO, no deberia pasar
}

void * list_extractFirst(List* list){
}

void * list_extractLast(List* list){
}

Bool list_isEmpty(const List* list){
}

const void* list_get(const List* list, int i){
}

int list_size(const List* list){
}

int list_print(FILE *fd, const List* list){
}
