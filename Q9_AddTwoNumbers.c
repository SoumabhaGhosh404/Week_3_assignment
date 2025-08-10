#include <stdio.h>
#include <stdlib.h>
struct Node{int data;struct Node* next;};
struct Node* new_node(int d){struct Node* n=malloc(sizeof(struct Node));n->data=d;n->next=NULL;return n;}
struct Node* add(struct Node* l1,struct Node* l2){struct Node* res=NULL,*last=NULL;int c=0;while(l1||l2||c){int s=(l1?l1->data:0)+(l2?l2->data:0)+c;c=s/10;s%=10;struct Node* n=new_node(s);if(!res)res=last=n;else{last->next=n;last=n;}if(l1)l1=l1->next;if(l2)l2=l2->next;}return res;}
void print(struct Node* h){while(h){printf("%d ",h->data);h=h->next;}}
int main(){struct Node* l1=new_node(2);l1->next=new_node(4);struct Node* l2=new_node(5);l2->next=new_node(6);struct Node* sum=add(l1,l2);print(sum);}