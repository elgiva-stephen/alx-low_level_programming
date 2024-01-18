#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates the memory using malloc
 * @b: size of memory allocated
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *output;

	output = malloc(b);

	if (output == NULL)
		exit(98);
	return (output);
}

