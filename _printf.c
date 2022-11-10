#include "main.h"
/**
 * _printf - print string
 * @format: variable that points to a list of arguments
 * @...: rest of arguments
 *
 * Return: the length of the printed string
 */

int _printf(const char *format, ...)
{
	va_list ptr;
	int pos, count = 0;

	va_start(ptr, format);

	if (format == NULL)
		return (-1);
	for (pos = 0;*(format + pos) != '\0'; pos++)
	{
		if (*(format + pos) == '%' && *(format + pos + 1) == '%')
		{
			count += _putchar(*(format + pos));
			pos++;
			continue;
		}
		
		if (*(format + pos) == '%')
		{
			if (match_case(format + pos + 1) != NULL)
			{
				count += match_case(format + pos + 1)(ptr);
				pos++;
				continue;
			}
		}
		count += _putchar(*(format + pos));
	}
	va_end(ptr);
	return (count);
}
