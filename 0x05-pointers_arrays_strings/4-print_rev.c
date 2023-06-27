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
 * print_rev - Prints a string, in reverse, followed by a new line
 * @s: The string to print
 */
void print_rev(char *s)
{
int length = str_len(s);

while (length--)
print_char(s[length]);

print_char('\n');
}
