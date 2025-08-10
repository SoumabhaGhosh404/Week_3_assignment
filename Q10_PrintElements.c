#include <stdio.h>
#include <stdlib.h>
struct Node{int data;struct Node* next;};
void print(struct Node* h){while(h){printf("%d\n",h->data);h=h->next;}}
int main(){struct Node* head=malloc(sizeof(struct Node));head->data=1;head->next=malloc(sizeof(struct Node));head->next->data=2;head->next->next=NULL;print(head);}