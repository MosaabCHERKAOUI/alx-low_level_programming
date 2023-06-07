#include "main.h"

/**
 * _pow_recursion - x to the power of y returning function
 *
 * @x: raised number.
 *
 * @y: The power.
 *
 * Return: x to the power of y value.
 *
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (_pow_recursion(x, y - 1) * x);
	}
}
