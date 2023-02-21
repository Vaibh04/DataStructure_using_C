#include<stdio.h>
#include<stdlib.h>

void function1();
void function2();
void function3();

void main(){
	char ch;
	int user;
	
	do{
		printf(" ||||||| MENU |||||||");
		printf("\t\n 1. Call 1st Function");
		printf("\t\n 2. Call 2nd Function");
		printf("\t\n 3. Call 3rd function");
		printf("\t\n 4. Exit\n");
		
		printf("What function you would like to call:- ");
		scanf("%d",&user);
		switch(user){
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("Enter correct choice !");
		}
				fflush(stdin);
				printf("You want to continue: Press 'Y' for Yes and 'N' for No:- ");
				scanf("%c",&ch);
	}while(ch=='Y' || ch=='y');
}
