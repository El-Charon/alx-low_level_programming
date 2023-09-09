#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * This program prints alphabetic from a to z except q and e.
 * and returns.
 *
 * Return: 0 upon successful execution.
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	{

		if (letter == 'q' || letter == 'e')
	{
		continue;
	}
		putchar(letter);
	}
		putchar('\n');
	return (0);
}
