#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int info;
    struct Node *next;
};

struct Node *start = NULL;
struct Node *last = NULL;  

void InsertionAtFirst(int item)
{
    struct Node *p = (struct Node*)malloc(sizeof(struct Node));
    if(p == NULL)
    {
        printf("Memory overflow\n");
        return;
    }

    p->info = item;

    if(start == NULL)
    {
        start = p;
        last = p;
        p->next = start;  
    }
    else
    {
        p->next = start;
        start = p;
        last->next = start;  
    }
}

void displayList()
{
    if(start == NULL)
    {
        printf("List is empty\n");
        return;
    }

    struct Node *temp = start;
    printf("Circular Linked List: ");
    do
    {
        printf("%d -> ", temp->info);
        temp = temp->next;
    } while(temp != start);
    printf("(head)\n");
}

int main()
{
    InsertionAtFirst(10);
    InsertionAtFirst(20);
    InsertionAtFirst(30);

    displayList();  

    return 0;
}