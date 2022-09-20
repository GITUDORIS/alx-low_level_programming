#include "main.h"

/**
 * puts2 - main function
 * @str: Pointer, the string to print.
 * Descrip: print other char of a string starting with the first char,and new line.
 * Return: (0)
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

		i++;
	}
	_putchar('\n');
}
