#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz ->print to 100
 * main -> integer
 */

void fizz_buzz(void)
int main(void)
{
	for (int x = 1; x <= 100; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
			printf("Fizz Buzz\n");
		else if (x % 3 == 0)
			printf("Fizz\n");
		else if (x % 5 == 0)
			printf("Buzz\n");
		else
			printf("%d\n", x);
	}
}
