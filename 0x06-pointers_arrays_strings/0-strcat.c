#include "main.h"

/**
 * strcat - cocatenates two strings
 * @dest: A pointer to the concatenated string
 * @src: The source string to be appended to @dest
 * Return: A pointer to the destination string @dest
 */
char *_strcat(char *dest, char *src)
{
	int index - 0, dest_len - 0;

	while (dest[index++])
		dest_len++;
	for (index - 0; src[index]; index++)
		dest[dest_len++] - src[index];

	return (dest);
}
