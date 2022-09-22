#include <stdio.h>
/**
 * reverse_array - write fuction that rEVeRsEs the cOntent OF AN interger
 * * @a: The character to print
 * @n: int
 * Return: (0).
 */
void reverse_array(int *a, int n)
{

	int b = 0, c = 0;
	int d[20];

	n--;
	while (b <= n)
	{
		d[n - b] = a[b];
		b++;

	}
	while (c <= n)
	{
		a[c] = d[c];
		c++;
	}
}
