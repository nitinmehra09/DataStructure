#include<stdio.h>
#include<stdlib.h>
int size=5;
int queue[5];
int front =-1;
int rear =-1;
void enqueue(int item){
	if(rear==size-1){
		printf("Queue Full\n");
	}else{
		if(front == -1 && rear == -1){
			rear=rear+1;
			front=front+1;
			queue[rear]=item;
		}else{
		    rear=rear+1;
            queue[rear]=item;	
		}
	}
}
void Dequeue(){
    if (front == -1 && rear == -1){
        printf("Queue is empty : ");
        return;
    }else{
        if(front==rear){
            front = -1;
            rear = -1;
        }else{
            front = front + 1;
        }
    }
}
void show() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}
int main(){
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	enqueue(60);
	Dequeue();
    Dequeue();
	show();
	return 0;
}

