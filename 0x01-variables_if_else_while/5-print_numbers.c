#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: print value of n; greater than, is zero , not less than 6.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* my code */
	int digit = 0;

	while (digit <= 9)
	{
		printf("%d", digit);
		++digit;
	}
	printf("\n");

	return (0);
}
