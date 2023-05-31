#include <stdio.h>

int main() {
    // declaration of variable a of type int
    // this contains an unknown/garbage value currently
    int a;
    // initialization of variable a
    // always initialize your variables before using them to avoid garbage values
    printf("Enter a value for a: ");

    // scanf is a function that comes from stdio.h
    // %d is a format specifier for integers
    // &a means that the value provided will be stored in the memory address of variable a
    scanf("%d", &a);

    // declaration and initialization of variable b of type int in the same line
    int b = 20;

    // declaration and initialization of variable c of type int, from values of other variables
    int c = a + b;

    // display the value of variable c
    // %d is a format specifier for integers
    // printf is a function that comes from stdio.h
    printf("a+20 = %d\n", c);

    // return 0 means that the program ended successfully
    return 0;
}