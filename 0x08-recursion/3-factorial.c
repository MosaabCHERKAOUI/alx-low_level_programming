#include "main.h"

/**
 * factorial - factorial of number.
 * @n: The number in the factorial.
 *
 * Return: n > 0 : n factorial.
 *         n < 0 : 1 an error indicating.
 */

int factorial(int n)
{
	int g = 1;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (g);
	}
	else
	{
	g = n * factorial(n - 1);
	}
	return (g);
}
