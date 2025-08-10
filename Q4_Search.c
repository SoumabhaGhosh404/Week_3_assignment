#include <stdio.h>
#include <stdlib.h>
struct Node{int data;struct Node* next;};
int search(struct Node* h,int key){while(h){if(h->data==key)return 1;h=h->next;}return 0;}
int main(){struct Node* head=malloc(sizeof(struct Node));head->data=1;head->next=malloc(sizeof(struct Node));head->next->data=2;head->next->next=NULL;printf("%d",search(head,2));}