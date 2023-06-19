#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: Prints the lowercase alphabet in reverse,
 * followed by a newline character, using putchar.
 *
 * Return: 0 if successful, non-zero otherwise.
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
