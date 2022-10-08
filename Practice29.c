// Write a C program to check whether a number is positive, negative or zero using switch case.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number to check it is Positive, Negative or Zero\n");
    scanf("%d", &num);

    switch (num > 0)
    {
    case 1:
        printf("%d is Positive", num);
        break;

    case 0:
        switch (num < 0)
        {
        case 1:
            printf("%d is Negative", num);
            break;

        case 0:
            printf("%d is Zero", num);
            break;
        }
        break;
    }
    return 0;
}
