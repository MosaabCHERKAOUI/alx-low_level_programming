#include "main.h"

/**
 * _puts_recursion - printing string after it is followed by a new line.
 *
 * @s: string
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar (*s);
	_puts_recursion(s + 1);
}
