#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
    int result = 0;
    int i = 0;
    int sign = 1; // Initialize to positive

    // Check for negative sign
    if (s[0] == '-')
    {
        sign = -1;
        i = 1; // Skip the negative sign
    }

    // Iterate through the string and convert to an integer
    for (; s[i] != '\0'; ++i)
    {
        result = result * 10 + (s[i] - '0');
    }

    return result * sign;
}

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}
