//Write a C program that includes variables, constants, and comments. Declare
//and use different data types (int, char, float) and display their values.
#include <stdio.h> // Standard Input/Output Library
int main() {
    // Declare variables of different data types
    int age = 25;
    float height = 5.9;
    char initial = 'J';

    // Define a constant
    const float PI = 3.14;

    // Print values using printf
    printf("=== Personal Information ===\n");
    printf("Age: %d years\n", age);            // %d for int
    printf("Height: %f feet\n", height);     // %f for float
    printf("Initial: %c\n", initial);          // %c for char
    printf("Constant PI value: %f\n", PI);   

    return 0;
}

