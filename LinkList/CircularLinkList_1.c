// InsertionAtFirst()

#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int info;
    struct Node *next;
};
struct Node *start = NULL;
struct Node *last = NULL;  
void InsertionAtFirst(int x)
{
    struct Node *p = (struct Node*)malloc(sizeof(struct Node));
    if(p == NULL){
        printf("Memory overflow\n");
        return;
    }else{
        if(start == NULL){
            p->info = x;
            p->next = p;
            start = p;
            last = p;
        }
        else{
            p->info = x;
            p->next = start;
            last->next = p;
            start=p;
        }
    }
}

void displayList() {
    if (start == NULL) {
        printf("Circular Linked List is empty.\n");
        return;
    }

    struct Node* temp = start;
    do {
        printf("%d -> ", temp->info);
        temp = temp->next;
    } while (temp != start);
    printf("(start)\n");
}

int main()
{
    InsertionAtFirst(10);
    InsertionAtFirst(20);
    InsertionAtFirst(30);
    InsertionAtFirst(40);
    InsertionAtFirst(50);
    InsertionAtFirst(60);

    displayList();  

    return 0;
}