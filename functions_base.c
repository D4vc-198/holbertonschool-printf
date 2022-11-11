#include "main.h"

/**
 * digit_base_10 - convert num to base 10
 * @ptr: variable
 * Return: lenght of string
 */
int digit_base_10(va_list ptr)
{
	int save = va_arg(ptr, int);

	return (print_number(save));
}
