#include "main.h"

/**
 * find_sqrt - square root finder.
 * @n: the desired number.
 * @i: the actual number.
 *
 * Return: n root,
 *  or -1 if n don't have  square root
 */
int find_sqrt(int n, int i)
{
	if (i * i != n && i <= n / 2)
	{
		i = find_sqrt(n, 1 + i);
	}
	if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - return number root.
 * @n: the given number.
 *
 * Return: n root,
 * or -1 if n don't have square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (find_sqrt(n, 1));
	}
}
