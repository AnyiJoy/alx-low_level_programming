#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: Prints all single-digit numbers of base 10,
 * starting from 0, followed by a newline character,
 * using putchar.
 *
 * Return: 0 if successful, non-zero otherwise.
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; ++i)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
