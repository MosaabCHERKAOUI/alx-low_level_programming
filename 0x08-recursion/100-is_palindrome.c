#include "main.h"

/**
 * str_length - Returns string length
 *
 * @s: string checker
 *
 * Return: string length
 */
int str_len(char *s)
{
	int length = 0;
	while (*s)
	{
		length++;
		s++;
	}
	return length;
}

/**
 * is_palindrome - palindrom string checker
 *
 * @s: The string checker
 *
 * Return: 1 if string is palindrome, else 0
 */
int is_palindrome(char *s)
{
	int length = str_len(s);
	int i;

	if (length <= 1)
		return (1);

	if (*s == *(s + length - 1))
		return (is_palindrome(s + 1) && is_palindrome(s + len - 2));
	else
		return (0);
}
