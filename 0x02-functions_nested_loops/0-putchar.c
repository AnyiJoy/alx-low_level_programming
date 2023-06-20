#include "main.h"

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
		_putchar(str[i]);
	}

	_putchar('\n');

	return (0);
}

/**
 * _putchar - Print a character to stdout.
 *
 * @c: The character to be printed.
 *
 * Return: On success, return 1. Otherwise, return -1 on error with errno set appropriately.
 */
int _putchar(char c)
{
	return write(1 , &c , 1 );
}
