#include <stdio.h>
#include <stdlib.h>
struct Node{int data;struct Node* next;};
void nth_from_end(struct Node* head,int n){struct Node* m=head;struct Node* f=head;for(int i=0;i<n;i++){if(!f)return;f=f->next;}while(f){m=m->next;f=f->next;}printf("%d",m->data);}
int main(){struct Node* head=malloc(sizeof(struct Node));head->data=1;head->next=malloc(sizeof(struct Node));head->next->data=2;head->next->next=malloc(sizeof(struct Node));head->next->next->data=3;head->next->next->next=NULL;nth_from_end(head,2);}