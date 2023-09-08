#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
main : entry point
rand : Pick random number and check if n is equal or higher then 0 or less then 0 
 then print the output
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n",n);
	} else if (n == 0)
	{
		printf("%d is zero\n",n);
	} else {
		printf("%d is positive\n",n);
	}
	return (0);
}
