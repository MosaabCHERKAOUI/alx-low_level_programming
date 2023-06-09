#include "main.h"

/**
 * _memcpy - create like memory areas
 *
 * @dest: where to store
 * @src: copy the source
 * @n: @src bytes
 *
 * Return: @dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
