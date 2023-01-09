#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - prints the consecutive characters of s1 that are in s2
 * @s: source string
 * @accept: search string
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
return ('\0');
}
