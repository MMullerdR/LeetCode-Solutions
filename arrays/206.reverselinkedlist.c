#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};
 
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* rHead = malloc(sizeof(*rHead));
    rHead = NULL;
    
    while(head != NULL){
        struct ListNode* new = malloc(sizeof(*new));
        new->val = head->val;
        new->next = rHead;
        rHead = new;

        head = head->next;
    }
    return rHead;
}

int main(){
    struct ListNode* head = NULL;
    for(int i = 5; i > 0; i--){ // gera a lista encadeada 1, 2, 3, 4, 5
        struct ListNode* new = malloc(sizeof(*new));
        new->val = i;
        new->next = head;
        head = new;
    }

    struct ListNode* reverseHead = reverseList(head);

    while(reverseHead != NULL){
        printf("%d\n", reverseHead->val);
        reverseHead = reverseHead->next; 
    }

    return 0;
}