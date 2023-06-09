#include "main.h"

/**
 * check_prime - Checks if a number is primitive
 *
 * @n: The number checker
 * @i: The divisor checker
 *
 * Return: 1 if the number is primitive, else 0
 */
int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if ((n % i == 0) && (i <= n / 2))
	{
		return (0);
	}
	if ((n % i != 0) && (i * i <= n))
	{
		return (check_prime(n, i + 1));
	}
	if ((n % i != 0) && ((i * i >= n) || (n == 2)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * is_prime_number - Checks if a number is prime
 *
 * @n: number check
 *
 * Return: 1 if the number is primitive, else 0
 */
int is_prime_number(int n)
{
	int i = 2;

	return (check_prime(n, i));
}
