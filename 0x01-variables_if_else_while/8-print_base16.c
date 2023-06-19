#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: Prints all numbers of base 16 in lowercase,
 * followed by a newline character, using putchar.
 *
 * Return: 0 if successful, non-zero otherwise.
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 16; ++i)
	{
		c = i < 10 ? '0' + i : 'a' + (i - 10);
		putchar(c);
	}

	putchar('\n');

	return (0);
}
