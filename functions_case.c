#include "main.h"

/**
 * char_case - add character
 * @ptr: variable
 * Return: lenght of string
 */

int char_case(va_list ptr)
{
	char c = va_arg(ptr, int);

	if (c != '\0')
		_putchar(c);
	return (1);
}
