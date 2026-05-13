#include <stdlib.h>

typedef struct MinStack{
    int val;
    struct MinStack *next;
} MinStack;

MinStack* minStackCreate() {
    MinStack *obj = NULL;
    return obj;
}

void minStackPush(MinStack** obj, int val) {
    MinStack *cell = malloc( sizeof(*cell) );
    if ( cell == NULL ) {
        return;
    }

    cell->val = val;
    cell->next = *obj;
    *obj = cell;
}

void minStackPop(MinStack** obj) {
    MinStack *cell = (*obj)->next;
    free(*obj);
    *obj = cell;
}

int minStackTop(MinStack* obj) {
    return obj->val;
}

int minStackGetMin(MinStack* obj) {
    if ( obj->next == NULL ) return obj->val;

    MinStack *current = obj->next;
    int a = obj->val;
    int b;

    while ( current ) {
        b = current->val;
        if ( b < a ) a = b;
        current = current->next;
    }
    return a;
}

void minStackFree(MinStack* obj) {
    if ( obj == NULL ) return;
    if ( obj->next == NULL ) {
        free( obj );
        return;
    }

    MinStack *current = obj;
    MinStack *nextNode = obj->next;

    while ( nextNode ) {
        free( current );
        current = nextNode;
        nextNode = nextNode->next;
    }
    
}
