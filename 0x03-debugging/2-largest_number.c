#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
        int largest;

  printf("Enter three different numbers: ");
  scanf("%lf %lf %lf", &a, &b, &c);

  // if a is greater than both b and c, a is the largest
  if (a >= b && b >= c)
    printf("%.2f is the largest number.", a);

  // if b is greater than both a and c, a is the largest
  if (b >= a && b >= c)
    printf("%.2f is the largest number.", b);

  // if c is greater than both a and b, c is the largest
  if (c >= a && c >= b)
    printf("%.2f is the largest number.", c);

  return largest;
}

