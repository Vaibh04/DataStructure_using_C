#include<stdio.h>
int add_at_end(int *arr,int freePos,int item);
void display(int *,int);
int main(){
	int arr[10];
	int i,num,item,freePos;
	char ch;
	
	printf("Enter the elements you want:- ");
	scanf("%d",&num);
	printf("Enter the element:\n");
	for(i=0;i<num;i++){
		printf("Enter the %d element:",i+1);
		scanf("%d",&arr[i]);
	}
	freePos=num;
	do{
	
	printf("Enter the element you want to insert:");
	scanf("%d",&item);
	freePos = add_at_end(arr,freePos,item);
	display(arr,freePos);
	fflush(stdin);
  	printf("Do you want to insert more? Press 'Y' for YES & 'N' for NO.");
	scanf("%c",&ch);
	
	}while(ch=='Y' || ch=='y');
	return 0;
}

int add_at_end(int *arr,int freePos, int item){
	arr[freePos]=item;
	freePos++;
	return freePos;
}

void display(int *arr,int length){
	int i;
	printf("The elements are:- ");
	for(i=0;i<length;i++){
		printf(" %d ",arr[i]);
	}
	printf("\n");
}
