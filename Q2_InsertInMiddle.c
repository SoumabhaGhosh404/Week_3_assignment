#include <stdio.h>
#include <stdlib.h>
struct Node {int data; struct Node* next;};
void insert_mid(struct Node* prev,int val){if(!prev)return;struct Node* n=malloc(sizeof(struct Node));n->data=val;n->next=prev->next;prev->next=n;}
void print(struct Node* h){while(h){printf("%d ",h->data);h=h->next;}}
int main(){struct Node* head=malloc(sizeof(struct Node));head->data=1;head->next=malloc(sizeof(struct Node));head->next->data=3;head->next->next=NULL;insert_mid(head,2);print(head);}