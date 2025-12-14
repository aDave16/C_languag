#include<stdio.h>
int main()
{
	//int num[]={1,2,3,4};for static
	int num[5];
	num[0]=1;
	num[1]=2;
	num[2]=3;
	num[3]=4;
	num[4]=5;
	printf("value is :%d\n",num[0]);
	printf("value is :%d\n",num[1]);
	printf("value is :%d",num[2]);
	return 0;
	
}
