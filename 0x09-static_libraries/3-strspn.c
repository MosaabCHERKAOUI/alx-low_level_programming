#include "main.h"

/**
 * _strspn - give you something
 * @s: something
 * @accept: string to compare
 *
 * Return: byte number
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			return (i);
	}
	return (i);
}
