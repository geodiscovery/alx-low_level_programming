#include <stdio.h>

/**
 * main - Entry point
 *
 * program that prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)

		putchar(c);
	putchar('\n');
	return (0);
}
