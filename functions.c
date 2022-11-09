#include "main.h"

/**
 * convert_base - convert base and add argument
 * @base: number of base to convert
 * @number: Number to convert
 * @band: flag
 * Return: lenght of string
 */

int convert_base(int base, int number, int band)
{
	char buffer[17];
	char buffersito[20];
	char *ptr = &buffersito[20];
	int save = number;

	if (band == 0)
		_strcpy(buffer, "0123456789ABCDEF");
	else
}
