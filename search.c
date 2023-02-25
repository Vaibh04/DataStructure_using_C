#include<stdio.h>

int search(int *a, int, int);
void disp(int *,int);
int main(){
	int arr[10]={1,2,3,4,6,7,8};
	int item=4;
	int length=7;
	int pos = search(arr,length,item);
	if(pos == -1){
		printf("Element not found");
	}else{
		printf("Element found %d position.",pos+1);
	}
	return 0;
}

int search(int *arr,int length,int item){
	int i;
	for(i=0;i<length;i++)
	{
		if(arr[i]==item)
	{
		return i;
	}
}
	return -1;
}


