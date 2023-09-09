#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * This program prints numbers from 0 to 9.
 * and returns.
 *
 * Return: 0 upon successful execution.
*/
int main(void)
{
	int anumb;

	for (anumb = 0; anumb <= 9; anumb++)

	{
		putchar('0' + anumb);
	}
		putchar('\n');
	return (0);
}
