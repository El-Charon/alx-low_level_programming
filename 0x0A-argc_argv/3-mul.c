#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Check if the correct number of command-line arguments
 * is provided using argc if not Return an error code.
 * @a & @b: Convert the first and second argument to an integer using agrv.
 * Return: Print the result of multiplying a and b.
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}
