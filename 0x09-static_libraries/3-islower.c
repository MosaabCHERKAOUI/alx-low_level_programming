#include "main.h"

/**
 * _islower - a function that checks the case of a char
 *
 * @c: char
 *
 * Return: 1 if c is lowercase, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
