#include "main.h"

/**
 * _isupper - tells the char if it is upper or not
 *
 * @c: char input
 *
 * Return: 1 if upper, else 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
