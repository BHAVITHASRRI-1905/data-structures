/* To check the given number is palindrome or not*/

#include<stdio.h>
int main()
{
	int num,rem ,number, reverse =0;
	printf("Enter a number:\n");     
	scanf("%d",&num);	
	number = num;
	while(num > 0)                 
	{
		       
 	rem = num % 10;                
 	reverse = reverse * 10 + rem;    
	num /= 10;                      
    }
    if(number == reverse)
    printf("\nNumber is a palindrome");
    else
    printf("\nNumber is not a palindrome");
        
      return 1;
}
