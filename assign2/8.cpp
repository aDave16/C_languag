//Write a C program that calculates the factorial of a number using a function.
//Include function declaration, definition, and call

#include<stdio.h>
int fact(int no);
int main()
{
	int no;
	printf("enter number:");
	scanf("%d",&no);
	printf("factorial is :%d",fact(no));
	return 0;
	
}
int fact(int no)
{
	if(no==0)
	{
		return 1;
	}
	int fact_n_minus1=fact(no - 1);//recursive fun that call itself 5-1=4
	int fact=fact_n_minus1 * no;//5*4=20*3
	return fact;
	
	
}
