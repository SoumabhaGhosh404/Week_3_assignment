#include <stdio.h>
#include <stdlib.h>
struct Node {int data; struct Node* next;};
void delete_node(struct Node** head,int key){struct Node* t=*head,*p=NULL;while(t&&t->data!=key){p=t;t=t->next;}if(!t)return;if(!p)*head=t->next;else p->next=t->next;free(t);}
void print(struct Node* h){while(h){printf("%d ",h->data);h=h->next;}}
int main(){struct Node* head=malloc(sizeof(struct Node));head->data=1;head->next=malloc(sizeof(struct Node));head->next->data=2;head->next->next=NULL;delete_node(&head,1);print(head);}