#include "main.h"

/**
 * factorial -> prints the factorial of a given number
 * @n: number
 * Return: an integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
