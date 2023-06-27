#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - updates the value it points to to 98
 * @n: pointer to an int
 * Return: void
 */
void reset_to_98(int *n)
{
	*n = 98;
}

/**
 * main - tests the function reset_to_98
 * Return: 0 if successful
 */
int main(void)
{
	int num = 0;

	printf("Before: %d\n", num);
	reset_to_98(&num);
	printf("After: %d\n", num);

	return (0);
}
