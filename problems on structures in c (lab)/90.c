//Program to find the sizeof structure

#include<stdio.h>
	
int main()
{
	struct student
{
	int rollno;
	char name[20];
	float marks;
}s;
   printf("%d",sizeof(struct student));
   
   
return 0;
}

