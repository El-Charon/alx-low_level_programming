#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
main : entry point
rand : random select a number
if exceptions to compare n to 0
return - always successful (0)
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
