#include "main.h"

/**
 * _islower-check if character is lowercase.
 * @c:character to check if it is lowercase.
 * Return:0 if lowercase, 1 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
