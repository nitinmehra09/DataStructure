//InsertionAtLast()
#include<stdio.h>
#include<stdlib.h>
struct Node {
    int info;
    struct Node* next;
};
struct Node * start = NULL;

void InsertionAtLast(int x){
	struct Node *p =(struct Node*)malloc(sizeof(struct Node));
	if (p == NULL){
		printf("Overflow condition : ");
	}
	else{
		if (start==NULL){
			p->info = x ; 
			p->next = NULL;
			start = p;
		}
		else{
			p->info = x;
			p->next = NULL;
			struct Node *temp=start;
			while(temp->next!=NULL){
				temp = temp->next;
			}
			temp->next = p;
		}
	}
}

void DisplayList() {
    struct Node* temp = start;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->info);
        temp = temp->next;
    }
    printf("NULL\n");
}

void main(){
	InsertionAtLast(10);
	InsertionAtLast(20);
	InsertionAtLast(40);
	InsertionAtLast(30);
	DisplayList();
}