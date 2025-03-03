// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct Node{
    int info;
    struct Node *next;
}*top =NULL;
struct Node* p;

void push(int item){
    p=(struct Node*)malloc(sizeof(struct Node));
    if(p==NULL){
        printf("Overflow");
    }else{
        if(top == NULL){
            p->info=item;
            p->next=NULL;
            top=p;
        }else{
            p->info = item;
            p->next = top;
            top = p;
        }
    }
}
void pop(){
    if(top==NULL){
        printf("Stack is empty \n");
    }
    struct Node* p = top;
    top = top->next;
    free(p);
}
void display() {
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }

    struct Node *temp = top;
    printf("Stack contents: ");
    while (temp != NULL) {
        printf("%d ", temp->info);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int item,n,m;
    printf("Enter no. of insertion : ");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        printf("Enter item : ");
        scanf("%d",&item);
        push(item);
    }
    printf("Enter no. of deletion : ");
    scanf("%d",&m);
    for (int i=0;i<m;i++){
        pop();
    }
    display(); 
    return 0;
}