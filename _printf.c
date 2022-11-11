#include "main.h"
/**
 * convert_base - convert base and add argument in the buffer
 * @base: number of base to convert
 * @number: Number to convert
 * @band: Flag with order to follow
 *
 * Return: lenght of string added to buffer
 */

int convert_base(int base, int number, int band)
{
	char buffer[17];
	char buffersito[20];
	char *ptr = &buffersito[20];
	long int save = number;

	if (band == 0)
		_strcpy(buffer, "0123456789ABCDEF");
	else
		_strcpy(buffer, "0123456789abcdef");
	*ptr = '\0';
	ptr--;

	if (number < 0)
	{
		number = -number;
	}

	while (number >= 0)
	{
		*ptr-- = buffer[number % base];
		number = number / base;
		if (number == 0)
			break;
	}
	if (save < 0)
		*ptr-- = 'x', *ptr-- = '0';
	ptr++;
	if (ptr == NULL)
		return (0);
	return (write(1, ptr, _strlen(ptr)));
}
