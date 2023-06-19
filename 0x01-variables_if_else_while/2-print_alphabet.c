#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: Prints the alphabet in lowercase,
 * followed by a newline character, using putchar.
 *
 * Return: 0 if successful, non-zero otherwise.
 */
int main(void)
{
    int i;

    for (i = 0; i < 26; ++i)
    {
        putchar('a' + i);
    }
    
    putchar('\n');

    return (0);
}
