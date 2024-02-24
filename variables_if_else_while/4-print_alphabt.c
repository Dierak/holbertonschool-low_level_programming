#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the alphabet in lowercase, except the q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c, e, q;

	e = 'e';
	q = 'q';

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != e && c != q)
			putchar(c);
	}
	putchar('\n');

	return (0);
}
