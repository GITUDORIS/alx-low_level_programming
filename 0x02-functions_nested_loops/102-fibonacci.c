#include <stdio.h>
/**
 * main - main block
 * Description: write a program that prints the first 50 fibonacci numbers
 * starting with 1 and 2 follwed by a new line
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long int a = 1, b = 2, next;

	while (i < 50)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
