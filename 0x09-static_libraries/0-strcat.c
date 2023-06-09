#include "main.h"

/**
 * _strcat - linking two strings
 *
 * @dest: destination pointer
 * @src: source pointer
 *
 * Return: points to @dest
*/

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*temp != '\0')
	{
		temp++;
	}

	while (*src != '\0')
	{
		*temp++ = *src++;
	}

	*temp = '\0';

	return (dest);
}
