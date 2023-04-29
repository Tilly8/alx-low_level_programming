#include "main.h"

/**
 * print_triangle - entry point
 * @size: Is the size of the triangle
 * @#: Character to print the triangle
 * If size is 0 or less, the function should print only a new line
 * Return: Always 0
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

