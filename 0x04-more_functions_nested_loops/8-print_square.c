#include "main.h"

/**
 * print_square - print a square
 * @size: size of length and width
 * Return: square made of '#'
 */

void print_square(int size)
{

int co, ro;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (co = 1; co <= size; co++)
{
_putchar('#');

for (ro = 2; ro <= size; ro++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
