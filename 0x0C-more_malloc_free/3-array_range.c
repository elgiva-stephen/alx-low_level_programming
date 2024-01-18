#include <stdlib.h>
#include "main.h"

/**
 *  *array_range -creates an array of integers
 *  @min: minimum range of stored values
 *  @max: maximum range of stored values and number of elements
 *  Return: pointeer to the new array
 */
int *array_range(int min, int max)
{
	int *output;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	output = malloc(sizeof(int) * size);

	if (output == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		output[i] = min++;

	return (output);
}
