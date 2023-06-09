#include "main.h"

/**
 * _strcmp - string comparer
 *
 * @s1: its the string in the first parameter
 * @s2: its a parameter
 *
 * Return: return a result
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0, r;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			break;
		}
		else
		{
			r = s1[i] - s2[i];
		}
		i++;
	}

	return (r);
}
