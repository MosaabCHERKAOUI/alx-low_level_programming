#include "main.h"

/**
 * _isdigit - verify the input is it in this interval 0 - 9
 *
 * @c: refers to the input
 *
 * Return: 1 means digit, 0 means not digit
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
