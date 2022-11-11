#include "main.h"

/**
 * convert_base - convert base and add argument
 * @base: number of base to convert
 * @number: Number to convert
 * @band: flag
 * @add: A pointer pointing to a memory address within the buffer
 * Return: lenght of string
 */

int convert_base(int base, int number, int band, char **add)
{
	char buffer[17];
	char *ptr;
	char buffersito[20];
	char *ptr = &buffersito[20];
	long int save = number, len_end = 0;

	if (band == 0 || band == 2)
		_strcpy(buffer, "0123456789ABCDEF");
	else
		_strcpy(buffer, "0123456789abcdef");
	*ptr = '\0';
	ptr--;

	if (number == 0)
	{
		**add = 48, (*add)++;
		return (1);
	}
	/*Convert*/
	if (number < 0)
		number = -number;
	while (number > 0)
	{
		*ptr-- = buffer[number % base];
		number = number / base;
	}

	if (save < 0)
		*ptr-- = '-';
	if (band == 16)
		*ptr-- = 'x', *ptr-- = '0';
	ptr++;

	if (_strlen(ptr) < 2 && band == 2)
	{
		**add = 0, (*add)++;
		len_end++; /*_putchar('0');*/
	}
	len_end += _strlen(ptr);
	return (write(1, ptr, len_end));
}

/**
 * print_number - prints an integer.
 * @n: integer n to print using _putchar
 * @add: A pointer pointing to a memory address within the buffer
 * Return: none - void function
 */
int print_number(long int n, char **add)
{
	unsigned int r;
	int _length = 0;

	if (n < 0)
	{
		**add = 45;
		(*add)++;
		n *= -1;
		_length++;
	}
	r = n;

	if (r / 10)
	{
		_length += print_number(r / 10, add);
	}
	**add = r % 10 + '0';
	(*add)++;
	return (0);
}
