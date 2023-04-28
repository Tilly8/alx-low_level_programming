#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative -  It prints a number
 * @i: is an integer
 * If the number is greater than 0: it is positive
 * If the number is 0: it's zero
 * If the number is less than 0: it is negative, followed by a new line
 * Return: 0
 */

void positive_or_negative(int i)
{

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
