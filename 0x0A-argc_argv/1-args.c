#include <stdio.h>
#include "main.h"

/**
 * main - It prints the number of arguments passed into it
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: Always  0 (Success)
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("Number of arguments: %d\n", argc - 1);

	return (0);
}
