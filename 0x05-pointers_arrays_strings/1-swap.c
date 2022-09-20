#include "main.h"

/**
 * swap_int - main function.
 * @*a: Pointer with the address value.
 * @*b: Pointer with the address value.
 * Description: functio that swaps value of two integers
 *
 * Return: none.
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}	


