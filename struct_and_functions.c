#include<stdio.h>


struct student{
	char name[30];
	int age;
};

void stru_Member(char name[],int age){
	printf("%s %d\n",name,age);
}

void stru_Variable(struct student s){
	printf("%s %d\n",s.name,s.age);
}

void ptr_String(struct student *ptr){
	printf("%s %d\n",ptr->name,ptr->age);
}

int main(){
	struct student s1={"Vaibhav",21};
	stru_Member(s1.name,s1.age); // Passing structure member as argument
	stru_Variable(s1); // Passing the structure variable as argument
	ptr_String(&s1); // Passing a pointer to structure as a Argument
	
	return 0;
}
