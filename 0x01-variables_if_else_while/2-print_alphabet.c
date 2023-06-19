#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints the lowercase alphabet using putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
