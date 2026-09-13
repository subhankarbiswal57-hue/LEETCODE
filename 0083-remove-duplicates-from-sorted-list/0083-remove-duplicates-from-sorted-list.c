/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *temp1;
    struct ListNode *temp2;
    temp1 = head;
        while(temp1 != NULL){
            temp2 = temp1->next;
            while(temp2 != NULL){
                if(temp1->val == temp2->val){
                    temp1->next = temp2->next;
                }temp2= temp2->next;
                    
            }temp1 = temp1->next;
        }return head;
}