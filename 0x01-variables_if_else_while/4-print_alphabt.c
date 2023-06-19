#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: Prints the alphabet in lowercase,
 * except for 'q' and 'e', followed by a newline character,
 * using putchar.
 *
 * Return: 0 if successful, non-zero otherwise.
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; ++i)
	{
		char c = 'a' + i;

		if (c != 'q' && c != 'e')
			putchar(c);
	}

	putchar('\n');

	return (0);
}
