#include<stdio.h>

struct student{
	char x;
	int age;
	struct student *ptr; //self referential Structure used in LinkedList to link node
};

int main(){
	struct student s1;
	s1.x='V';
	s1.age=21;
	s1.ptr=NULL;
	printf("%c %d Pointer Does not point to other node.\n",s1.x,s1.age);
	
	struct student s2;
	s2.x='M';
	s2.age=21;
	s2.ptr=NULL;
	printf("%c %d Pointer Does not point to other node.\n",s2.x,s2.age);
	
//	Now we will link s1 with s2
	s1.ptr=&s2;
	printf("%c %c %d %d Pointer s1.ptr point to s2 node",s1.x,s1.ptr->x,s1.age,s1.ptr->age);
	// we write s1.ptr->age because the elements of the node is stored inside s1.ptr 
	// "->" this operator is used to access structure members
	

	return 0;
}
