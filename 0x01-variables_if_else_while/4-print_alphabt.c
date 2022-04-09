#include <stdio.h>

/**
 * main - Entry point
 *
 * program that prints the alphabet in lowercase,
 * followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
	char a = 'a';
	int n = 0;

	while (n < 26)

	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
		a++;
		n++;
	}
	putchar('\n');
	return (0);
}
