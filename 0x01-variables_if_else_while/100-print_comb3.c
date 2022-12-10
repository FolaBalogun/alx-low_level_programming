#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int n;
	int a;

	for (a = 48; a <= 56; n++)
	{
		for (a = n + 1; a <= 57; a++)
		{
			putchar(n);
			putchar(a);
			if (a != 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
