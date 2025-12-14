//Write a C program to create a file, write a string into it, close the file, then
//open the file again to read and display its contents.
#include <stdio.h>
int main()
{
    FILE* file;
    file = fopen("13.txt", "w");  

    char msg[20]="good morning";
	int i=fputs(msg,file);
    fclose(file);      

    file = fopen("13.txt", "r");

    printf("\nContents of the file:\n");
    printf("%s", str); 

    fclose(file);
}

