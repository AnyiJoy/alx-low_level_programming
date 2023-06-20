#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: Prints _putchar, followed by a newline character.
 *
 * Return: 0 if successful, non-zero otherwise.
 */
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		putchar(str[i]);
	}

	putchar('\n');

	return (0);
}
