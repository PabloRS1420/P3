#include "queue.h"

struct _Queue {
    void **head;
    void **end;
    void* item[MAXQUEUE];
    destroy_elementqueue_function_type   destroy_element_function;
    copy_elementqueue_function_type      copy_element_function;
    print_elementqueue_function_type     print_element_function;
};

/**
------------------------------------------------------------------
Inicializa la cola: reserva memoria para ella e inicializa todos
sus elementos.
------------------------------------------------------------------
*/
Queue* queue_ini(destroy_elementqueue_function_type f1, copy_elementqueue_function_type f2, print_elementqueue_function_type f3) {
    Queue *q = NULL;
    q = (Queue *) malloc(siceof(Queue));
    if(!q) return NULL;
    
    q->head = &(q->item[0]);
    q->end = &(q->item[0]);
    q.destroy_elementqueue_function_type = f1;
    q.copy_elementqueue_function_type = f2;
    q.print_elementqueue_function_type = f3;
    
    return q;
}

/**
------------------------------------------------------------------
Libera la cola y todos sus elementos.
------------------------------------------------------------------
*/
void queue_destroy(Queue *q) {
    destroy_element_function((Queue *)q);
}

/**
------------------------------------------------------------------
Comprueba si la cola está vacía.
------------------------------------------------------------------
*/
Bool queue_isEmpty(const Queue *q) {
    if(!q) return NULL_BOOLEAN;
    
    if (pq->end == pq->head) return TRUE;
    
    return FALSE;
}

/**
------------------------------------------------------------------
Comprueba si la cola está llena.
------------------------------------------------------------------
*/
Bool queue_isFull(const Queue* queue) {
    void **aux = NULL;
    if (queue == NULL) return NULL_BOOLEAN;
    
    void **aux = ((Queue*)queue)->item;
    
    /**
    if (queue->end == queue->item+MAXQUEUE-1) {
        aux = queue->item; //pq->end = &(pq->item[0]) 
    } 
    else {
        aux = queue->end + 1;   
    }
    */
    
    if (aux == queue->front) return TRUE;
    
    return FALSE;
}

/**
------------------------------------------------------------------
Inserta un elemento en la cola realizando para ello una
copia del mismo, reservando memoria nueva para él.
------------------------------------------------------------------
*/
Status queue_insert(Queue *q, const void* pElem) {
    Elemento *aux = NULL;
    if (!q || !pElem || queue_isFull(q) == TRUE) return ERROR;

    aux = element_copy(pElem);
    if (!aux) return ERROR;

    *(q->end) = aux;
    
    if (q->end == q->item+MAXQUEUE-1) {
        q->end = q->item; //pq->end = &(pq->item[0])
    }
    else {
        q->end++;
    }
    
    return OK;
}

/**
------------------------------------------------------------------
Extrae un elemento de la cola.
------------------------------------------------------------------
*/
void *queue_extract(Queue *q) {
    Elemento *pElem = NULL;
    if (!q || queue_isEmpty(q)) return NULL;
    
    pElem = *(q->head);
    
    if (q->head == q->item+MAXQUEUE-1) {
        q->head = q->item; //pq->head = &(pq->item[0])
    }
    else {
        pq->head++;
    }
    return pElem;
}

/**
------------------------------------------------------------------
Devuelve el número de elementos de la cola.
------------------------------------------------------------------
*/
int queue_size(const Queue *q) {
    if(!q) return NULL;
    int x;
    x = q->end - q->head;
    return x;
}    
    
/**
------------------------------------------------------------------
Copia un elemento de la cola.
------------------------------------------------------------------
*/
void *queue_copy(const Queue *q, const void* pElem) {
    return copy_element_function((void *)pElem);
}
/**
------------------------------------------------------------------
Imprime toda la cola (un elemento en cada línea), devolviendo el
número de caracteres escritos.
------------------------------------------------------------------
*/
int queue_print(FILE *pf, const Queue *q) {
    return print_element_function(pf, (Queue *)q);
}
    


