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

/**
------------------------------------------------------------------
Inicializa la lista: reserva memoria para ella e inicializa todos
sus elementos.
------------------------------------------------------------------
*/
List* list_ini(destroy_elementlist_function_type f1, copy_elementlist_function_type f2, 
print_elementlist_function_type f3, cmp_elementlist_function_type f4){
    List *l = NULL;
}

/**
------------------------------------------------------------------
Libera la lista y todos sus elementos.
------------------------------------------------------------------
*/
void list_free(List* list){
    destroy_element_function((List *)list);
}

/**
------------------------------------------------------------------
Inserta al principio de la lista realizando una copia del elemento.
------------------------------------------------------------------
*/
Status list_insertFirst(List* list, const void *elem){
}

/**
------------------------------------------------------------------
Inserta al final de la lista realizando una copia del elemento.
------------------------------------------------------------------
*/
Status list_insertLast(List* list, const void *elem){
}


/**
------------------------------------------------------------------
Inserta en orden en la lista realizando una copia del elemento.
------------------------------------------------------------------
*/
Status list_insertInOrder(List *list, const void *pElem){
    Si hay que insertarlo al principio, tratar aparte
    Si no hay un elemento siguiente, tratar aparte
    Si el nodo actual es menor y el siguiente es mayor, se inserta
    Si los dos son menores, avanzas
    Si los dos son mayores, FALLO, no deberia pasar
}

/* Extrae del principio de la lista realizando una copia del elemento almacenado en dicho nodo. */ 
void * list_extractFirst(List* list){
}

/**
------------------------------------------------------------------
Extrae del final de la lista realizando una copia del elemento almacenado en dicho nodo.
------------------------------------------------------------------
*/
void * list_extractLast(List* list){
}

/**
------------------------------------------------------------------
Comprueba si la lista está vacía.
------------------------------------------------------------------
*/
Bool list_isEmpty(const List* list){
}

/**
------------------------------------------------------------------
Devuelve el elemento i-ésimo almacenado en la lista. En caso de error, devuelve NULL. 
------------------------------------------------------------------
*/
const void* list_get(const List* list, int i){
}

/**
------------------------------------------------------------------
Devuelve el tamaño de una lista.
------------------------------------------------------------------
*/
int list_size(const List* list){
}

/**
------------------------------------------------------------------
Devuelve una copia de la lista.
------------------------------------------------------------------
*/
int list_size(const List* list){
}

/**
------------------------------------------------------------------ 
Imprime una lista (cada elemento en una nueva línea) devolviendo el número de caracteres escritos.
------------------------------------------------------------------
*/ 
int list_print(FILE *fd, const List* list){
}
