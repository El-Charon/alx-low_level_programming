#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int j, k;
for (j = 0; j <= 98; j++)
{
	for(k = j +1; k <= 99; j++)
	{
		putchar((j / 10) + '0');
		putchar((j % 10) + '0');
		putchar(' ');
		putchar((k / 10) + '0');
		putchar((k % 10) + '0');
		if (j == 98 && k == 99)
			continue;
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
