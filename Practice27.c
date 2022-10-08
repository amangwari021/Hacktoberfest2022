// Write a C program to find maximum between two numbers using switch case.
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter first number\n");
    scanf("%d", &num1);
    printf("Enter second number\n");
    scanf("%d", &num2);

    /* Expression (num1 > num2) will return either 0 or 1 */
    switch (num1 > num2)
    {
        /* If condition (num1>num2) is false */
    case 0:
        printf("%d is maximum", num2);
        break;

        /* If condition (num1>num2) is true */
    case 1:
        printf("%d is maximum", num1);
        break;
    }

    return 0;
}