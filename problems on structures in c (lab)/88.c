/*Write a C program that accepts an employee's ID, total worked hours of a month
 and the amount he received per hour. 
Print the employee's ID and salary (with two decimal places) of a particular month*/

#include<stdio.h>
int main()
{
	int emp_id;
	float hour;
	double amt,salary;
	printf("Enter employee's ID:");
	scanf("%d",&emp_id);
	printf("Enter total worked hours in a month:");
	scanf("%f",&hour);
	printf("Enter  amount received per hour:");
	scanf("%lf",&amt);
	salary = hour * amt;
	printf("Employee ID = %d",emp_id);
	printf("\n Salary of the month is %.2lf",salary);
	return 0;
}
