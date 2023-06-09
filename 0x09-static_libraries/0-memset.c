#include "main.h"

/**
 * _memset - put in the memory some data.
 * @s: memory pointer
 * @b: the data that will be put
 * @n: number of data of the memory
 *
 * Return: a pointer to the memory @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
