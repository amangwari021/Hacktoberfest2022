// Write a C program to print day of week name using switch case.

#include <stdio.h>
int main()
{
    int peek;
    /* Input week number from user */
    printf("Enter week number (1-7)\n");
    scanf("%d", &peek);
    switch (peek)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;

    default:
        printf("Invalid input! Please enter Week number between (1-7)\n");
        break;
    }
    return 0;
}
