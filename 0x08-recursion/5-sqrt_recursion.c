#include "main.h"

/**
 * _sqrt_recursion -> returns the square root of a number
 * @n: Integer
 * Return: on success 1
 * sqrt2 -> makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 */

int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
