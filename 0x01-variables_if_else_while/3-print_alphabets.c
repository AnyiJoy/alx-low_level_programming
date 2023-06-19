#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: Prints the alphabet in lowercase,
 * then uppercase, followed by a newline character,
 * using putchar.
 *
 * Return: 0 if successful, non-zero otherwise.
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 26; ++i)
	{
		c = 'a' + i;
		putchar(c);
	}

	for (i = 0; i < 26; ++i)
	{
		c = 'A' + i;
		putchar(c);
	}

	putchar('\n');

	return (0);
}
