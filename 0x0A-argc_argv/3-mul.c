#include <stdio.h>
#include "main.h"
/**
 * _ab - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = _ab(argv[1]);
	b = _ab(argv[2]);
	printf("%d\n", a * b);
	return (0);
}
