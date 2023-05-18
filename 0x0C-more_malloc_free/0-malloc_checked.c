#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - Allocates memory using malloc
 * @b: Integer to allocate memory for
 * Return: A pointer to the allocated memory
 * If malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
