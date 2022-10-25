#include "main.h"

/**
 * puts2 - prints one character out of many
 * @str: input
 * Return: print
 */
void puts2(char *str);
{
	int i = 0;

	for (; str[i] != '\0'; 1++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
