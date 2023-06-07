#include "main.h"
/**
 *_print_rev_recursion - reversing a string and printing it function.
 *@s: string.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar (*s);
}
