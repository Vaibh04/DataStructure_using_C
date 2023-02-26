// STACK is a linear data structure in which Insertion and Deletion are only
//		 allowed at the end, called the TOP of the Stack. 
// 			Implemented by using ARRAY & LinkedList.

#include<stdio.h>
#define MAX 10  //predefined size of the arr of 10 named MAX.

int stack_arr[MAX]; //global stack_arr
int top=-1; //globally declared so that we don't need to pass the value.

void push();
void pop();
void display();
void isEmpty();
void isFull();

int main(){
	int choice;
	char ch;
	do{
	
	printf("\n|||MENU-Stack Operations|||\n");
	printf("1.Push \n2.Pop \n3.isEmpty \n4.isFull \n5.Display \n6.Exit \n\n");
	printf("Which operation do you want to perform: ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			isEmpty();
			break;
		case 4:
			isFull();
			break;
		case 5:
			display();
			break;
		case 6:
			exit (0);
			break;
		default:
			printf("Choose correct choice.\n");
			break;
		}
		fflush(stdin);
		printf("Do you want to continue? Press 'Y'' for YES and 'N' for NO :-");
		scanf("%c",&ch);
	}while(ch=='Y' || ch=='y');
	return 0;
}

void push(){
	int data;
	printf("Enter the data you want to PUSH: ");
	scanf("%d",&data);
	
	if(top==MAX-1){
		printf("STACK OVERFLOW\n");
		return;
	}
	top++;
	stack_arr[top]=data;
}

void pop(){
	if(top==-1){
		printf("STACK is EMPTY\n");
		return;
	}
	int temp=stack_arr[top];
	printf("Popped element is %d\n",stack_arr[top]);
	top--;
	
}

void isEmpty(){
	if(top==-1){
		printf("YES, the Stack is EMPTY.\n");
		return;
	}
	int temp=MAX-1-top;
	printf("You can add %d more elements into the Stack.\n",temp);
}

void isFull(){
	if(top==MAX-1){
		printf("Stack is FULL\n");
	}
}
void display(){
	if(top==-1){
		printf("STACK is EMPTY\n");
		return;
	}
	
	int i;
	printf("Stack Elements are:-");
	for(i=0;i<=top;i++)
	{
		printf(" %d ",stack_arr[i]);
	}
	printf("\n");
}
