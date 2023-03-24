#include "main.h"

/**
 * print_most_numbers - print 0 - 9 apart
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}
