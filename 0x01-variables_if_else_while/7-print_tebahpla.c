#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * This program prints alphabetic from z to a.
 * and returns.
 *
 * Return: 0 upon successful execution.
*/
int main(void)
{
	char letter;

	for (letter = 'z'; letter <= 'a'; letter--)

	{
		putchar(letter);
	}
		putchar('\n');
	return (0);
}
