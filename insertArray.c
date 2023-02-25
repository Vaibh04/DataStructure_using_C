#include<stdio.h>

int insertArray(int *, int, int, int);
void disp(int *,int);
int main(){
	int arr[10]={1,2,3,4,6,7,8};
	int pos=5;
	int item=5;
	int length=7;
	printf("Before insertion:- \n");
	disp(arr,length);
	length = insertArray(arr,length,item,pos);
	printf("After Insertion:- \n");
	disp(arr,length);
	return 0;
}

int insertArray(int *arr,int length,int item, int pos){
	int i;
	for(i=length-1;i>=pos-1;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[pos-1]=item;
	length++;
	return length;
}

void disp(int *arr,int l){
	int i;
	for(i=0;i<l;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
