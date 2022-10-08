// Write a C program to find roots of a quadratic equation using switch case.

#include <stdio.h>
#include <math.h> /* Used for sqrt() */

int main()
{
    float x, y, z;
    float root1, root2, imaginary;
    float discriminant;

    printf("Enter values of x, y, z of quadratic equation (xX^2 + yX + z): ");
    scanf("%f%f%f", &x, &y, &z);

    /* Calculate discriminant */
    discriminant = (y * y) - (4 * x * y);

    /* Compute roots of quadratic equation based on the nature of discriminant */
    switch (discriminant > 0)
    {
    case 1:
        /* If discriminant is positive */
        root1 = (-y + sqrt(discriminant)) / (2 * x);
        root2 = (-y - sqrt(discriminant)) / (2 * x);

        printf("Two distinct and real roots exists: %.2f and %.2f",
               root1, root2);
        break;

    case 0:
        /* If discriminant is not positive */
        switch (discriminant < 0)
        {
        case 1:
            /* If discriminant is negative */
            root1 = root2 = -y / (2 * x);
            imaginary = sqrt(-discriminant) / (2 * x);

            printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",
                   root1, imaginary, root2, imaginary);
            break;

        case 0:
            /* If discriminant is zero */
            root1 = root2 = -y / (2 * x);

            printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);
        }
        break;
    }

    return 0;
}
