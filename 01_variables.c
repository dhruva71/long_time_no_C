#include <stdio.h>

int main() {
    // declaration of variable a of type int
    int a;
    // initialization of variable a
    a = 10

    // declaration and initialization of variable b of type int in the same line
    int b = 20;

    // declaration and initialization of variable c of type int, from values of other variables
    int c = a + b;

    // display the value of variable c
    // %d is a format specifier for integers
    // printf is a function that comes from stdio.h
    printf("The sum of a and b is %d\n", c);

    // return 0 means that the program ended successfully
    return 0;
}