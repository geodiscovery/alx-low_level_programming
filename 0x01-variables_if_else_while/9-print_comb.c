#include <stdio.h>

/**
 * main - Entry point
 *
 * program that prints all possible combinations of single-digit numbers.
 * Return: Always 0 (success)
 */
int main(void)
{
	int p;

	for (p = '0'; p <= '9'; p++)
	{
		putchar(p);

		if (p != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
