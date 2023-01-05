#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns length of string
 * @s: string to be measured
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
