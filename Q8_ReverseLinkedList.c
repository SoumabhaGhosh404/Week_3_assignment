#include <stdio.h>
#include <stdlib.h>
struct Node{int data;struct Node* next;};
struct Node* reverse(struct Node* head){struct Node* prev=NULL;struct Node* cur=head;while(cur){struct Node* nxt=cur->next;cur->next=prev;prev=cur;cur=nxt;}return prev;}
void print(struct Node* h){while(h){printf("%d ",h->data);h=h->next;}}
int main(){struct Node* head=malloc(sizeof(struct Node));head->data=1;head->next=malloc(sizeof(struct Node));head->next->data=2;head->next->next=NULL;head=reverse(head);print(head);}