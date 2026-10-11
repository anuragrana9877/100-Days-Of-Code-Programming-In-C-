Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main()
{
    float n1, n2, sum, difference, product, quotient;

    printf("Enter first number: ");
    scanf("%f", &n1);

    printf("Enter second number: ");
    scanf("%f", &n2);

    sum = n1 + n2;
    difference = n1 - n2;
    product = n1 * n2;

    printf("Sum = %.2f\n", sum);
    printf("Difference = %.2f\n", difference);
    printf("Product = %.2f\n", product);

    if (n2 != 0)
    {
        quotient = n1 / n2;
        printf("Quotient = %.2f\n", quotient);
    }
    else
    {
        printf("Quotient cannot be calculated because division by zero is not possible.\n");
    }

    return 0;
}