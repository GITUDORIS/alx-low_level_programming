#include "main.h"

/**
 * print_line - Print straight lines
 * @n: how to many lines to print
 *
 * Return: Always 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
