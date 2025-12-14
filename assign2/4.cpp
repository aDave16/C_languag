//Write a C program that accepts two integers from the user and performs
//arithmetic, relational, and logical operations on them. Display the results.
#include<stdio.h>
main()
{
	float n1,n2;
	printf("enter num 1:");
	scanf("%f",&n1);
	printf("enter num 2:");
	scanf("%f",&n2);
	
	printf("sum is:%f\n",n1+n2);
	printf("sub is:%f\n",n1-n2);
	printf("mul is:%f\n",n1*n2);
	printf("divison is:%f\n",n1/n2);
//	printf("modulo is:%f",n1%n2);both are in int
    
    int no1;
    printf("%d\n",no1++);
    printf("updated is %d\n",no1);
    printf("%d\n",++no1);
    printf("%d\n",no1--);
    printf("updated :%d\n",no1);
    printf("%d",--no1);

	int n1,n2;
             n1=10;
	         n2=20;
    printf("ans is:%d\n",n1<n2);
	printf("ans is:%d\n",n1>n2);
	printf("ans is:%d\n",n1<=n2);
	printf("ans is:%d\n",n1>=n2);
	printf("ans is:%d\n",n1!=n2);
	printf("ans is:%d\n",n1==n2);
}

