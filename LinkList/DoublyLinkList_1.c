//InsertionAtFirst()
#include<stdio.h>
#include<stdlib.h>
struct Node {
    int info;
    struct Node* next;
    struct Node* prev;
};
struct Node * start = NULL;

void InsertionAtFirst(int x){
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
			p->info = x;
			p->next = start;
		    p->prev = NULL;
		    start = p;
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
	
	
	InsertionAtFirst(10);
	InsertionAtFirst(20);
	InsertionAtFirst(30);
	InsertionAtFirst(40);
    InsertionAtFirst(50);
	DisplayList();
}