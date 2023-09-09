#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
  * Main - Entry Point
  * In this program we will print all possible different combinations
  * of three diferents digits 
  * Return : Always 0 ( Sucess)
  */

int main(void)
{
	int j, k, l;

	for (j = '0'; j < '9'; j++)
	{

	for (k = j + 1; k <= '9'; k++)
	{

	for (l = k + 1; l <= '9'; l++)
	{
		if ((k != j) != l)
		{
			putchar(j);
			putchar(k);
			putchar(l);
		if (j == '7' && k == '8')
			continue;
		putchar(',');
		putchar(' ');
		}
	}
	}
	}
	putchar('\n');
	return (0);
}
