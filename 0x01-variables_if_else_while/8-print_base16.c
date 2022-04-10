#include <stdio.h>

/**
 * main - Entry point
 *
 * program that prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int t;
	char k;

	for (t = 48; t <= 57; t++)
		putchar(t);
	for (k = 97; k <= 102; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
