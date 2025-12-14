//Write a C program to print numbers from 1 to 10 using all three types of loops
//(while, for, do-while)
#include<stdio.h>
main()
{
	int i=1;
//	for(i;i<=10;i++)
//	{
//		printf("%d\n",i);
//	}
	
//	while(i<=20)
//	{
//		printf("%d\n",i);
//		i++;
//	}
	
	do
	{
		printf("%d\n",i);
		i++;
	}
	while(i<=30);
}

