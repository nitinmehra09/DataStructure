#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int info;
	struct Node*next;
};
struct Node*start;
int InsertionAtFirst(int data)
{
	
	struct Node*ptr;
	ptr= (struct Node*)malloc(sizeof(struct Node*));
	if(ptr==NULL)
	{
		printf("overflow");
	}
	else if(start==NULL)
	{
		ptr->info=data;
		ptr->next=NULL;
		start=ptr;
	}
	else
	{
		ptr->info=data;
		ptr->next=start;
		start=ptr;
	}
}

	int main(){
		for(int i=0;i<10;i++){
			InsertionAtFirst(i);
		}
		
		for(int i=0;i<10;i++){
			InsertionAtFirst(i);
		}
		
		
		
		struct Node*temp=start;
	    while(temp!=NULL)
	    {
	    	printf("%d",temp->info);
	    	temp= temp->next;
		}
		
	}

