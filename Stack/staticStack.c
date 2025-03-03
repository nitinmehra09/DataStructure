#include <stdio.h>
int top = -1;
void push(int a[],int maxsize,int item){
    if (top == maxsize - 1){
        printf("stack is full\n");
    }
    else{
        top +=1;
        a[top] = item;
    }
}
void pop(){
    if(top == -1){
        printf("Stack is empty \n");
    }
    else{
        top -=1;
    }
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
    int n,m;
    printf("Enter size of stack : ");
    scanf("%d",&n);
    int a[n],item;
    for (int i=0;i<n;i++){
        printf("Enter item to push: ");
        scanf("%d",&item);
        push(a,n,item);
    }
    display(a);
    printf("Enter no. of element want to remove : ");
    scanf("%d",&m);
    for (int i=0;i<m;i++){
        pop();
    }
    printf("After Pop operation \n");
    display(a);
    return 0;
}
