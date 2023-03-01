#include<stdio.h>
#define MAX 20


void push(int *,int *,int); // we are going to pass 2 variables 
void pop(int *,int *);
void display(int *,int *); 

int main()
{
	int arr[MAX],choice,data;
	int top=-1;
	while(1)
	{
		printf("||MENU||\n");
		printf("1. PUSH\n");
		printf("2. POP\n");
		printf("3. Display\n");
		printf("4. Quit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("Enter the data you want to insert: ");
				scanf("%d",&data);
				push(arr,&top,data);
				break;
			case 2:
				pop(arr,&top);
				break;
			case 3:
				display(arr,&top);
				break;
			case 4:
				exit(1); // used to terminate the program.
			default:
				printf("Wrong Choice\n");
				
		}
	}
}

void push(int *arr,int *top,int data)
{
	if(*top==MAX-1)
	{
		printf("Stack overflow.\n");
		return;
	}
	(*top)++;
	arr[*top]=data;
}

void pop(int *arr, int *top)
{
	if(*top==-1)
	{
		printf("Stack Underflow.\n");
		return;
	}
	int temp=arr[*top];
	printf("Popped element is: %d\n",temp);
	(*top)--;
}

void display(int *arr, int *top)
{
	int i;
	printf("Elements are: ");
	for(i=*top;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
