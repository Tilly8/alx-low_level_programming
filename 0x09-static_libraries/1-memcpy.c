#include "main.h"

/**
 *_memcpy - This function copies memory area
 *@dest: memory where the n bytes is stored
 *@src: memory area where n bytes is copied from
 *@n: number of bytes
 *
 *Return: Copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
