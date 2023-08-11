#include "main.h"
#include <stdarg.h>

/**
 * prt_error - Print errors and exit of the program.
 * @args: Number error to exit.
 */
void prt_error(const int args, ...)
{
	int error_num;
	va_list list;

	va_start(list, args);
	error_num = args;

	if (error_num == 97)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	else if (error_num == 98)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			va_arg(list, char*));
	else if (error_num == 99)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			va_arg(list, char*));
	else if (error_num == 100)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
			va_arg(list, int));

	exit(error_num);
}

/**
 * main - Copy the content of a file to another file.
 * @argc: Number of arguments.
 * @argv: Arguments file_to and file_from names.
 * Return: 0 is succes.
 */
int main(int argc, char **argv)
{
	int file_from, file_to;
	char buf[1024];
	int n_chars, n_prints;

	if (argc != 3)
		prt_error(97);

	/*Open file_from*/
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		prt_error(98, argv[1]);

	/*Open file_to*/
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		prt_error(99, argv[2]);

	/*Read*/
	n_chars = read(file_from, buf, 1024);
	/*Write*/
	for (; n_chars > 0; n_chars = read(file_from, buf, 1024))
	{
		n_prints = write(file_to, buf, n_chars);
			if (n_prints == -1)
				prt_error(99, argv[2]);
	}
	if (n_chars == -1)
		prt_error(98, argv[1]);

	/*Close files*/
	if (close(file_from) == -1)
		prt_error(100, file_from);
	if (close(file_to) == -1)
		prt_error(100, file_to);

	return (0);
}
