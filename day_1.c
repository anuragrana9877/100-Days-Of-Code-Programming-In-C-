//Q1: Write a program to input two numbers and display their sum.
#include <stdio.h>

int main()
{
    float n1, n2, sum;

    printf("Enter two numbers: ");
    scanf("%f %f", &n1, &n2);

    sum = n1 + n2;

    printf("Sum = %.2f", sum);

    return 0;
}