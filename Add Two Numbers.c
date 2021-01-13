/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* newNode(int n){
    struct ListNode* temp = malloc(sizeof(struct ListNode));
    temp->val = n;
    temp->next = NULL;
    return temp;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {   
    struct ListNode* head = NULL;
    struct ListNode* rear = NULL;
    struct ListNode* current = NULL;
    int carry = 0;
    int value = 0;
    
    while(l1 != NULL || l2!= NULL){
        value = carry + (l1?l1->val:0) + (l2?l2->val:0);
        
        carry = (value>=10)? 1:0;
        value = (value>=10)? value-10:value;
        
        current = newNode(value);
        
        if (head == NULL)
            head = current;
        else
            rear->next = current;
        
        rear = current;
        
        if (l1 != NULL)
            l1 = l1->next;
        
        if (l2 != NULL)
            l2 = l2->next;
        
        if (carry == 1)
            rear->next = newNode(1);
    }
    return head;
}
    
