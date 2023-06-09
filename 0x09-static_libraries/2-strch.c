#include "main.h"

/**
 * _strchr - char finder
 * @s: what you are searching for
 * @c: located char
 *
 * Return: If c is found - the pointer to the first occurence.
 * If c is not found - 0.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
