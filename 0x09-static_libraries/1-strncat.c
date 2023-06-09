#include "main.h"

/**
 * _strncat -  i don't have the energy to describe it
 *
 * @dest: input pointer
 * @src: source pointer
 * @n: number max that you should use
 *
 * Return: pointer to the resulting string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
