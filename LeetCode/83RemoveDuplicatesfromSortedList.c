#include <stdio.h>
#include <stdlib.h>

  struct ListNode {
      int val;
     struct ListNode *next;
  };

struct ListNode* head;

int main (){
struct ListNode *proximo, *anterior=head;
        for(anterior,proximo = anterior->next ; anterior->next != NULL; anterior=proximo, proximo = proximo->next){
            if(anterior -> val == proximo ->val){
                anterior->next=proximo->next;
            }
        }

    while (head->next != NULL){
    printf("%d",head->val);
    head=head->next;
    }
}