#include<stdio.h>
int main() 
{
    int num = 5;         
    int *ptr = &num;     

    printf("Before modification:\n");
    printf("Value of num = %d\n", num);

    *ptr = 10;

    printf("After modification:\n");
    printf("Value of num = %d\n", num);

    return 0;
}

