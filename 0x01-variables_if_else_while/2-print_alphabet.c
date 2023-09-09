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
	for (char letter = 'a'; letter <= 'z'; letter++) {
        putchar(letter);
    }
    putchar('\n');
	return (0);
}
