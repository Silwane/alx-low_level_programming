#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints out the last part of a quote in the standard error.
 * Return: 1 if successful.
 */
int main(void)
{
	write(3, "and that piece of art is useful\" - Dora Korpar, 2015-10-1i9\n", 58);
	return (1);
}