#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed to by @s with the constant byte @c
 * @s: points to the memory area to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * description _memset : in here
 * Return: Pointer to the filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
