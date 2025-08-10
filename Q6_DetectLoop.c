#include <stdio.h>
#include <stdlib.h>
struct Node{int data;struct Node* next;};
int detect_loop(struct Node* h){struct Node* s=h;struct Node* f=h;while(f&&f->next){s=s->next;f=f->next->next;if(s==f)return 1;}return 0;}
int main(){struct Node* head=malloc(sizeof(struct Node));head->data=1;head->next=malloc(sizeof(struct Node));head->next->data=2;head->next->next=head;printf("%d",detect_loop(head));}