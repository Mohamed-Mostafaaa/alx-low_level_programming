#include<stdio.h>
#include<unistd.h>

/**
 * main - Entry point
 *
 * Description: print a quote using write function
 *    ssize_t write(int fd, const void *buf, size_t count);
 *
 * Return: This time we return an error 1.
*/

int main(void)
{
	putchar("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
