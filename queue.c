#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "queue.h"

#define MAXQUEUE 100

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
sus elementos. Es importante que no se reserve memoria para los
elementos de la cola.
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
    
    if (queue->end == queue->item+MAXQUEUE-1) {
        aux = &(queue->item[0]);  
    } 
    else {
        aux = queue->end + 1;   
    }
    
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
    if (!q || !pElem || queue_isFull(q)) return ERROR;

    aux = elemento_copiar(pElem);
    if (!aux) return ERROR;

    *(q->head) = aux;
    
    if (q->end == q->item+MAXQUEUE-1) {
        q->end = &(q->item[0]);
    }
    else {
        q->end++;
    }
    
    return OK;
}

/**
------------------------------------------------------------------
Extrae un elemento de la cola. Es importante destacarque la cola
deja de apuntar a este elemento por lo que la gestión desu memoria
debe ser coherente: devolver el puntero al elemento o devolver 
una copia liberando el elemento en la cola.
------------------------------------------------------------------
*/
void *queue_extract(Queue *q) {
    Elemento *pElem = NULL;
    if (!q || queue_isEmpty(q)) return NULL;
    
    pElem = *(q->head);
    
    if (q->head == q->item+MAXQUEUE-1) {
        q->head = &(q->item[0]);  //pq->front= &(pq->datos[0])
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
    
    

/**
------------------------------------------------------------------
Imprime toda la cola (un elemento en cada línea), devolviendo el
número de caracteres escritos.
------------------------------------------------------------------
*/
int queue_print(FILE *pf, const Queue *q) {


