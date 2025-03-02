// Online C compiler to run C program online
#include <stdio.h>
int top = -1;
void algo_push(int a[],int maxsize,int item){
    if (top == maxsize - 1){
        printf("stack is empty\n");
    }
    top +=1;
    a[top] = item;
    //printf("Item %d pushed to stack\n", item);
}
void display(int a[]) {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack contents: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n],item;
    for (int i =0;i<n;i++){
        printf("Enter item to push: ");
        scanf("%d",&item);
        algo_push(a,n,item);
    }
    display(a);
    return 0;
}
