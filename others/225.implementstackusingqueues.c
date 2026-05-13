#include <stdlib.h>
#include <stdbool.h>

typedef struct Node{
    int val;
    struct Node *next;
} Node;

typedef struct {
    Node *top;
} MyStack;

MyStack* myStackCreate() {
    MyStack *obj = malloc(sizeof(*obj));
    obj->top = NULL;
    return obj;
}

void myStackPush(MyStack* obj, int x) {
    Node *new = malloc(sizeof(*new));
    new->next = obj->top;
    new->val = x;
    obj->top = new; 
}

int myStackPop(MyStack* obj) {
    Node *cell = obj->top->next;
    int x = obj->top->val;
    free(obj->top);
    obj->top = cell;
    return x;
}

int myStackTop(MyStack* obj) {
    return obj->top->val;
}

bool myStackEmpty(MyStack* obj) {
    if ( obj->top == NULL ) return true;
    return false;
}

void myStackFree(MyStack* obj) {
    if ( obj->top == NULL ) {
        return;
    }
    if ( obj->top->next == NULL ) {
        free( obj->top );
        return;
    }

    Node *cell = obj->top;

    while( cell != NULL ) {
        Node *nextCell = cell->next;
        free( cell );
        cell = nextCell;
    }
    free( obj );
    return;
}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);
 
 * int param_2 = myStackPop(obj);
 
 * int param_3 = myStackTop(obj);
 
 * bool param_4 = myStackEmpty(obj);
 
 * myStackFree(obj);
*/