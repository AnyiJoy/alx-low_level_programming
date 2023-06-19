#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: Prints all possible combinations of single-digit numbers,
 * followed by a comma and space, using putchar.
 *
 * Return: 0 if successful, non-zero otherwise.
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
	{
		putchar('0' + i);

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
