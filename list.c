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
Inicializa la lista reservando memoria e inicializa todos sus elementos. 
------------------------------------------------------------------
*/
List* list_ini(destroy_elementlist_function_type f1, copy_elementlist_function_type f2, 
print_elementlist_function_type f3, cmp_elementlist_function_type f4) {
    List *l = NULL;
    l = (List *) malloc(siceof(List));
    if(!l) return NULL;
    
    l->node = nodo_crear();
    if(!l->node) return NULL;
    
    l->node = NULL;
    l.destroy_element_function = f1;
    l.copy_element_function = f2;
    l.print_element_function = f3;
    l.cmp_element_function = f4;
    
    return l;
}

/**
------------------------------------------------------------------
Libera la lista y todos sus elementos.
------------------------------------------------------------------
*/
void list_free(List* list) {
    destroy_element_function((List *)list);
}

/**
------------------------------------------------------------------
Inserta al principio de la lista realizando una copia del elemento.
------------------------------------------------------------------
*/
Status list_insertFirst(List* list, const void *elem) {
    Nodo n = nodo_crear();
    if(!n) return ERROR;
    
    n->data = element_copy(e);
    n->next = l->node;
    l->node = n;
    
    return OK;
}

/**
------------------------------------------------------------------
Inserta al final de la lista realizando una copia del elemento.
------------------------------------------------------------------
*/
Status list_insertLast(List* list, const void *elem) {
    if(list_isEmpty(list) == TRUE) return list_insertFirst(list, elem);
    
    Nodo n = nodo_crear();
    if(!n) return ERROR;
    
    for(n = l->node; n->next != NULL; n = n->next)
        
    n = n->next;
    n->data = element_copy(e);
    
    return OK;
}


/**
------------------------------------------------------------------
Inserta en orden en la lista realizando una copia del elemento.
------------------------------------------------------------------
*/
Status list_insertInOrder(List *list, const void *pElem) {
    Si hay que insertarlo al principio, tratar aparte
    Si no hay un elemento siguiente, tratar aparte
    Si el nodo actual es menor y el siguiente es mayor, se inserta
    Si los dos son menores, avanzas
    Si los dos son mayores, FALLO, no deberia pasar
}

/* Extrae del principio de la lista realizando una copia del elemento almacenado en dicho nodo. */ 
void *list_extractFirst(List* list) {
    if(list_isEmpty(list) == TRUE) return NULL;
    
    Nodo n = nodo_crear();
    if(!n) return ERROR;
    
    Element *e = element_ini();
    if(!e) return ERROR;
    
    n = l->node;
    e = element_copy(n->data);
    n->next = l->node;
    
    nodo_liberar(n);
    
    return e;
}

/**
------------------------------------------------------------------
Extrae del final de la lista realizando una copia del elemento almacenado en dicho nodo.
------------------------------------------------------------------
*/
void *list_extractLast(List* list) {
    if(list_isEmpty(list) == TRUE) return NULL;
    
    Element *e = element_ini();
    if(!e) return ERROR;
    
    if(l->node->next == NULL) {
        e = element_copy(l->node->data);
        nodo_liberar(l->node);
        return e
    }
    else {
        Nodo n = nodo_crear();
        if(!n) return ERROR;
        
        for(n = l->node; n->next != NULL; n = n->next)
        
        e = element_copy(n->next->data);
        nodo_liberar(n->next);
        n->next = NULL;
        return e;
    }
}

/**
------------------------------------------------------------------
Comprueba si la lista está vacía.
------------------------------------------------------------------
*/
Bool list_isEmpty(const List* list) {
    if(l->node == NULL) return TRUE;
    else return FALSE;
}

/**
------------------------------------------------------------------
Devuelve el elemento i-ésimo almacenado en la lista. En caso de error, devuelve NULL. 
------------------------------------------------------------------
*/
const void* list_get(const List* list, int i) {
    if(list_isEmpty(list) == TRUE) return NULL;
    
    Nodo n = nodo_crear();
    if(!n) return ERROR;
    Element *e = element_ini();
    if(!e) return ERROR;
    int x;
    
    for(n = l->node, x = 0; x < i; n = n->next, x++)
        
    e = element_copy(n->data);
    return e;
}

/**
------------------------------------------------------------------
Devuelve el tamaño de una lista.
------------------------------------------------------------------
*/
int list_size(const List* list) {
    if(list_isEmpty(list) == TRUE) return 0;
    else if(l->node->next == NULL) return 1;
    else {
        Nodo n = nodo_crear();
        if(!n) return ERROR;
        int x;
      
        for(n = l->node, x = 1; n->next != NULL; n = n->next, x++)
        
        return x;
    }
}

/**
------------------------------------------------------------------
Copia un elemento de la lista.
------------------------------------------------------------------
*/
void *list_copy(const List* list, const void* pElem) {
    copy_element_function((void *)pElem);
}

/**
------------------------------------------------------------------ 
Imprime una lista (cada elemento en una nueva línea) devolviendo el número de caracteres escritos.
------------------------------------------------------------------
*/ 
int list_print(FILE *fd, const List* list) {
    print_element_function(fd, (List *)list);
}
