#include <stdio.h>

/**
 * main - Prints the alphabetic in lower and upper case
 *
 * Retun: Always (Successful)
 */
int main()
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
