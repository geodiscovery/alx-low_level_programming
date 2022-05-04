#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: argument counter to an int
 * @argv: array that contains the program command line arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

