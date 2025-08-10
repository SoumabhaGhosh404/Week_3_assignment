#include <stdio.h>
#include <stdlib.h>
struct Node {int data; struct Node* next;};
void insert(struct Node** head, int val){struct Node* n=malloc(sizeof(struct Node));n->data=val;n->next=*head;*head=n;}
void print(struct Node* h){while(h){printf("%d ",h->data);h=h->next;}}
int main(){struct Node* head=NULL;insert(&head,3);insert(&head,2);insert(&head,1);print(head);}