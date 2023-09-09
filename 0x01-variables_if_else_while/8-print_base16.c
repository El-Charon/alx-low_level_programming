#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * This program prints alphabetic numbers from a to z gradually.
 *
 * Return: 0 upon successful execution.
*/
int main(void)
{
	char letter;
	int number;

	for (number = 0; number <= 9; number++)

	{
		putchar(number);
	}

	for (letter = 'a'; letter <= 'f'; letter++)

	{
		putchar(letter);
	}
		putchar('\n');
	return (0);
}
