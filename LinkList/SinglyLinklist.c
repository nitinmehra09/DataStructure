//InsertionAtFirst


#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node* next;
};

struct Node* start = NULL; 

void InsertionAtFirst(int data) {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    if (ptr == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        exit(1); 
    }

    ptr->info = data;

    if (start == NULL) {
        ptr->next = NULL; 
    } else {
        ptr->next = start; 
    }

    start = ptr; 
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

int main() {
    
    for (int i = 0; i < 10; i++) {
        InsertionAtFirst(i);
    }
    DisplayList();

    return 0;
}