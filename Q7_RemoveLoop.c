#include <stdio.h>
#include <stdlib.h>
struct Node{int data;struct Node* next;};
void remove_loop(struct Node* loop_node,struct Node* head){struct Node* p1=head;struct Node* p2;while(1){p2=loop_node;while(p2->next!=loop_node && p2->next!=p1)p2=p2->next;if(p2->next==p1){p2->next=NULL;return;}p1=p1->next;}}
void detect_and_remove(struct Node* head){struct Node* s=head;struct Node* f=head;while(f&&f->next){s=s->next;f=f->next->next;if(s==f){remove_loop(s,head);return;}}}
int main(){struct Node* head=malloc(sizeof(struct Node));head->data=1;head->next=malloc(sizeof(struct Node));head->next->data=2;head->next->next=head;detect_and_remove(head);}