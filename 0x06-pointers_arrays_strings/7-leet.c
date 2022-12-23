#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to be encoded
 * Return: a pointer to the encoded string
 */
char *leet(char *str)
{
	int i = 0, j;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		for (i = 0; j <= 7; j++)
		{
			if (str[i] == leet[j] ||
			str[i] - 32 == leet[j])
			str[i] = j + '0';
		}
		i++;
	}

	return (str);
}
