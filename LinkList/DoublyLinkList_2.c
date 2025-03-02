//InsertionAtLast()
#include<stdio.h>
#include<stdlib.h>
struct Node {
    int info;
    struct Node* next;
    struct Node* prev;
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
			p->prev = NULL;
			start = p;
		}
		else{
		    struct Node *temp=start;
			p->info = x;
			p->next = NULL;
			while(temp->next!=NULL){
				temp = temp->next;
			}
		    temp->next = p;
		    p->prev = temp;
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
	InsertionAtLast(30);
	InsertionAtLast(40);
	InsertionAtLast(50);
	DisplayList();
}