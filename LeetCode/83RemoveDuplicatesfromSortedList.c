/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head){

struct ListNode *proximo, *anterior=head;
        for(anterior,proximo = anterior->next ; anterior->next != NULL; anterior=proximo, proximo = proximo->next){
            if(anterior -> val == proximo ->val){
                anterior->next=proximo->next;
            }
        }
        return head;
}