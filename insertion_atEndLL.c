#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
};
struct node* add_at_end(struct node *ptr,int in){
	struct node *temp = malloc(sizeof(struct node));
	temp->data = in;
	temp->link = NULL;
	
	ptr->link=temp;
	return temp;
	
}
int main(){
	int in;
	struct node *head=malloc(sizeof(struct node));
	head->data=45;
	head->link=NULL;
	
	struct node *ptr=head;
	ptr = add_at_end(ptr,95);
	ptr = add_at_end(ptr,25);
	ptr = add_at_end(ptr,15);
	
	ptr=head;
	int count=1;
	while(ptr != NULL){
		printf("The data in %d Node is: %d \n",count,ptr->data);
		count++;
		ptr=ptr->link;
	}
	
	return 0;
}
