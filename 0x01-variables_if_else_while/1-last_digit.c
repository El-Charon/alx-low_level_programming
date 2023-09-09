#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * This program generates a random number and compares grabes the last digit.
 * Then it compares it to 0 and 6 and 5. It then outputs
 * the result of the comparison and returns.
 *
 * Return: 0 upon successful execution.
*/
int main(void)
{
	int n;
	int nl;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	nl = n % 10;
if(nl < 6)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, nl);
} else if(nl == 0 && nl != 0)
{
	printf("Last digit of %d is %d and is 0\n", n, nl);
} else {
	printf("Last digit of %d is %d and is greater than 5\n", n, nl);
}
	return (0);
}
