#include<stdio.h>
void input(int *,int length);
int search(int *, int item);
int deletion(int *,int length);
int insert(int *, int length);
int merge(int *arr1, int *arr2, int *arr3,int arr1_Len,int arr2_Len);
int sort(int *);
void disp(int *,int);

void disp(int *arr,int length){
	int i;
	for(i=0;i<length;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void input(int *arr,int length){
	int i;
	printf("Enter the elements\n");
	for(i=0;i<length;i++)
	{
		printf("Enter %d element: ",i+1);
		scanf("%d",&arr[i]);
	}
}

int main(){
	int arr[100];
	int length,choice,pos;
	char ch;
	printf("Enter the elements you want in your array:-");
	scanf("%d",&length);
	input(arr,length);
	do{
	printf("\t||||Menu|||\n");
	printf("1.Insertion \n2.Search \n3.Deletion \n4.Merging \n5.Sorting \n6.Exit\n");
	printf("Enter what operation you want to do:- \n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("Before Insertion:\n");
			disp(arr,length);
			length=insert(arr,length);
			printf("After Insertion:\n");
			disp(arr,length);
			printf("Insertion Complete\n");
			break;
		case 2:
			pos=search(arr,length);
			if(pos==-1){
				printf("Element does not exist in the array.\n");
			}else{
				printf("Element found at %d position\n",pos+1);
			}
			break;
		case 3:
			printf("Your array: \n");
			disp(arr,length);
			length=deletion(arr,length);
			printf("After Deletion:\n");
			disp(arr,length);
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			exit(0);
			break;
		default:
			printf("Enter correct choice\n");
	}
		fflush(stdin);
		printf("Do you want to Continue: Press 'Y' for YES and 'N' for NO.\n ");
		scanf("%c",&ch);
	}while(ch=='Y' || ch=='y');
	
	return 0;
}


int insert(int *arr,int length){
	int i;
	int item,pos;
	printf("Enter the item you want to Insert:-");
	scanf("%d",&item);
	printf("In which index you want to Insert:-");
	scanf("%d",&pos);
	for(i=length-1;i>=pos;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[pos]=item;
	length++;
	return length;
}

int search(int *arr,int length){
	int item,i;
	printf("Enter the item you want to search: ");
	scanf("%d",&item);
	for(i=0;i<length;i++){
		if(arr[i]==item)
		{
			return i;
		}
	}
	return -1;
}

int deletion(int *arr,int length){
	int i,pos;
	printf("Which index you want to delete: ");
	scanf("%d",&pos);
	int temp=arr[pos];
	printf("Deleted element is: %d\n",temp);
	for(i=pos;i<length-1;i++){
		arr[i]=arr[i+1];
	}
	
	return --length;
}
