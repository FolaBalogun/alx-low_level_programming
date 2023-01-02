#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates character on a string
 * @s: string
 * @c: character to search
 * Return: pointer to the first occurence of character c in string s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		++s;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0);
}
