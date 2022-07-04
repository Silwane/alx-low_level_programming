#include <stdio.h>

/**
 * main - Prints a serie of numbers with commas
 *
 * Retun: Always (Successful)
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);

		if (c != '9')
		{
			putchar(',');
		}
	}

	putchar('\n');

	return (0);
}
