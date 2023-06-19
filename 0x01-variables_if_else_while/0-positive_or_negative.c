#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point of the program.
 *
 * Description: Assigns a random value to int 'n'
 * and prints if it's positive, negative or zero.
 *
 * Return: 0 if successful, non-zero otherwise.
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    
    printf("%d ", n);
    
    if (n > 0)
        printf("is positive\n");
    else if (n == 0)
        printf("is zero\n");
    else
        printf("is negative\n");

    return (0);
}
