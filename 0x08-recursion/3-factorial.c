#include "main.h"

/**
 * factorial -> prints the factorial of a number
 * @n: Integer
 * Return: on success 1
 */

int factorial(int n)
{
	if(n < 0)
		return (-1);
	if(n == 0)
		return (1);
	else
		return (n * factorial (n - 1));
}
