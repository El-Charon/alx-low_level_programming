#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int number = 1;

    reset_to_98(&number);

    printf("After: %d\n", number);

    return 0;
}
