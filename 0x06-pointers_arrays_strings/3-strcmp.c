#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: The character to print
 * @s2: to print
 * Return: On success 1.
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] == s2[a] && s1[a] && s2[a])
	{
		a++;
	}

	return (s1[a] - s2[a]);
}
