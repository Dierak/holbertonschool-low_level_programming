#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: first value
 * @b: second value
 * @n: thirth value
 * Return: new value of target
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
