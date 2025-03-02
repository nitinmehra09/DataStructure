#include<stdio.h>
#include<stdlib.h>

int size=5;
int queue[5];
int front =-1;
int rear =-1;
void enqueue(int item)
{
	if(rear==size-1)
	{
		printf("Queue Full");
	}
	else
	{
		if(rear==front==-1)
		{
			rear=rear+1;
			front=front+1;
			queue[rear]=item;
		}
		else
		{
		  rear=rear+1;
		  queue[rear]=item;	
		}
	}
}

int show()
{
	int i;
	for(i=1;i<size;i++)
	{
		printf("%d",queue[i]);
	}
}
int main()
{
	enqueue(5);
	enqueue(4);
	enqueue(52);
	enqueue(15);
	enqueue(75);
	enqueue(58);
	show();
}

