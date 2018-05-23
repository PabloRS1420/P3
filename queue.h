#indef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "element.h"
#include "functions.h"
#include "types.h"

#define MAXQUEUE 100

typedef struct _Queue Queue;

typedef void (*destroy_elementqueue_function_type)(void*); 
typedef void (*(*copy_elementqueue_function_type)(const void*)); 
typedef int (*print_elementqueue_function_type)(FILE *, const void*); 

Queue *queue_ini(destroy_elementqueue_function_type f1, copy_elementqueue_function_type f2, print_elementqueue_function_type f3);
void queue_destroy(Queue *q);
Bool queue_isEmpty(const Queue *q);
Bool queue_isFull(const Queue *queue);
Status queue_insert(Queue *q, const void *pElem);
void *queue_extract(Queue *q);
int queue_size(const Queue *q);
void *queue_copy(const Queue *q, const void* pElem);
int queue_print(FILE *pf, const Queue *q);

#endif
