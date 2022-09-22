#include "main.h"

/**
*_strncat - Funtion
*
*@dest: Destiny
*@src: Source
*@n: Variable
*Return: Destiny(@dest)
*/
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;
	int tam = 0;

	for (; dest[tam];)
	{
		tam++;
	}

	while (b < n && src[b])
	{
		dest[tam + a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
