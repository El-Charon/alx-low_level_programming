#include "main.h"

/**
 * jack_bauer - a function that prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59.
 * hour = hour, min = minutes
 * / 10 allows second digit to rotate
 * for loop breaks before passing 24:00
 * Return: 24 hour clock line by line
 */

void jack_bauer(void)
{
	int hour, min;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
