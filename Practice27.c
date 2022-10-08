// Write a C program to find maximum between two numbers using switch case.
#include <stdio.h>
int main()
{
    int num3, num4;
    printf("Enter first number\n");
    scanf("%d", &num3);
    printf("Enter second number\n");
    scanf("%d", &num4);

    /* Expression (num3 > num4) will return either 0 or 1 */
    switch (num3 > num4)
    {
        /* If condition (num3>num4) is false */
    case 0:
        printf("%d is maximum", num4);
        break;

        /* If condition (num3>num4) is true */
    case 1:
        printf("%d is maximum", num3);
        break;
    }

    return 0;
}
