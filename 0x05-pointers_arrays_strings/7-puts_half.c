#include "main.h"
#include <unistd.h>

/**
 * print_char - Writes a character to the standard output
 * @c: The character to print
 */
void print_char(char c)
{
write(1, &c, 1);
}

/**
 * str_len - Returns the length of a string
 * @s: The string to measure
 *
 * Return: The length of the string
 */
int str_len(char *s)
{
int length = 0;

while (*s++)
length++;

return (length);
}

/**
 * puts_half - Prints half of a string
 * @str: The string to print
 */
void puts_half(char *str)
{
int length = str_len(str);
int n = (length + 1) / 2;

while (str[n] != '\0')
{
print_char(str[n]);
n++;
}
print_char('\n');
}
