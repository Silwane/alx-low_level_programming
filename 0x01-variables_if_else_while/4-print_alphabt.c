#include <stdio.h>

/**
 * main - Prints some letter of the alphabets
 *
 * Return: Always (Successful)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	
	putchar('\n');
	
	return (0);
}
