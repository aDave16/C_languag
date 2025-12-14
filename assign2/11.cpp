#include<stdio.h>
#include<string.h>
int main()
{
	char name[40];
	char surname[30];
	
	printf("enter ur name:");
	scanf("%s",name);
	printf("enter surname:");
	scanf("%s",surname);
    printf(strcat(name ,surname));
    
    printf("\n length is :%d",strlen(name));
    
	
	return 0;
}
