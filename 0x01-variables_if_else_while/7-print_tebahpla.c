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
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		--ch;
	}
	putchar('\n');

	return (0);
}
