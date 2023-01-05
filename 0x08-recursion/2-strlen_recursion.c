#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string to be measured
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int len - 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
}
