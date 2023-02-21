#include<stdio.h>
#include<stdlib.h>

// Write a function oriented program to initialize an array of 10 elements and then multiply all the elements of 
// array by 5 and then display it.

void display(int arr[]);
void multiply(int arr[]);
void initialize(int arr[]);

int main(){
	int arr[10];
	initialize(arr);
	multiply(arr);
	display(arr);
	return 0;
}

void initialize(int arr[]){
	int i;
	printf("Enter the elements of the array:-\n");
	for(i=0;i<10;i++)
	{
	//	printf("Enter %d element: ",i+1);
		scanf("%d",&arr[i]);
	}
}

void multiply(int arr[]){
	int i;
	for(i=0;i<10;i++)
	{
		arr[i]=arr[i]*5;
	}
}

void display(int arr[]){
	int i;
	for(i=0;i<10;i++)
	{
		printf("The %d element is: %d\n",i+1,arr[i]);
	}
}
