#include "main.h"

/**
 * print_square - Prints a square, followed by a new line
 * @#: Character used to print the square
 * @size: Is the size of the square
 * If size is 0 or less, the function should print only a new line
 * Return: Always 0
 */

void print_square(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{

	int i, j;

	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
