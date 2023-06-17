#include <unistd.h>

/**
 * main - Entry point of the program that prints a message to standard error.
 *
 * Description: Print "and that piece of art is useful\" - Dora Korpar, 2015-10-19"
 * followed by a new line to standard error, without using printf or puts.
 *
 * Return: The function returns 1.
 */

int main(void)
{
    const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(STDERR_FILENO, message, sizeof(message) - 1);
    return (1);
}
