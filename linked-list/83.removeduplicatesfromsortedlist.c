#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

 struct ListNode* deleteDuplicates(struct ListNode* head) {
    if ( head == NULL ) return NULL;
    if ( head->next == NULL ) return head;

    struct ListNode* slow = head;
    struct ListNode* fast = head->next;

    while ( slow != NULL && fast != NULL ) {
        fast = slow->next;

        while ( fast != NULL && slow->val == fast->val ) { 
            slow->next = fast->next;
            if ( fast->next == NULL ){
                free(fast);
                return head;
            }
            free(fast);
            fast = slow->next;
        }
        slow = slow->next;
    }
    return head;
}