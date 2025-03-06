#include<stdio.h>
void main(){
	int a[]={20,40,90,70,60,50,10,30,100,80};
	int i,j,temp;
	printf("Before swaping : ");
	for(i=0; i<10; i++){
		printf("%d\t",a[i]);
	}
	//swaping
	for(i=0;i<10;i++){
		for(j=1+i;j<10;j++){
			if(a[i]>a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nAfter swaping : ");
	for(i=0; i<10; i++){
		printf("%d\t",a[i]);
	}
}
