#include<stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct Student s[3];
    int i;
    for(i = 0; i < 3; i++)
    {
        printf("\nEnter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    for(i = 0; i < 3; i++) 
	{
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Marks: %f\n", s[i].marks);
    }

    return 0;
}

