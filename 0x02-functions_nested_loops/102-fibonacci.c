#include <stdio.h>

/**
 * main - prints the Fibonacci sequence up to a certain limit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    unsigned long int j, k, next;

    j = 1;
    k = 2;

    printf("%lu, %lu, ", j, k);  // Print the first two terms

    for (i = 1; i <= 48; ++i)  // Print the next 48 terms
    {
        next = j + k;
        printf("%lu", next);

        if (i != 48)  // Add a comma and space for all terms except the last one
            printf(", ");

        j = k;
        k = next;
    }

    printf("\n");

    return (0);
}
