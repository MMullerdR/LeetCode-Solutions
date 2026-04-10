#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct ListNode {
    int val;
    struct ListNode *next;
};
 
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
   
    struct ListNode *head = malloc(sizeof(*head));
    head->next = NULL;
    struct ListNode *atual = head;

    if(list1 == NULL){
        return list2;
    }
    else if(list2 == NULL){
        return list1;
    }
    else{
        while(list1 != NULL && list2 != NULL){
            
            if(list1->val <= list2->val){
                atual->next = list1;

                list1 = list1->next;
            }
            else if(list2->val < list1->val){
                atual->next = list2;

                list2 = list2->next;
            }
            atual = atual->next;
        }

        if(list1 == NULL){
            atual->next = list2;
        }
        else{
            atual->next = list1;
        }
    }
    return head->next;
}