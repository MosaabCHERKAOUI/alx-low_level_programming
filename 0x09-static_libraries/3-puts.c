#include "main.h"

/**
 * _puts - an end line after each string
 *
 * @str: string
 *
 * Return: void
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
