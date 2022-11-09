#include "main.h"
/**
 * _printf - print string
 * @format: variable that points to a list of arguments
 * @...: rest of arguments
 */

int _printf(const char *format, ...)
{
	va_list ptr;
	int pos = 0;
	int len = 0;
	int tmp = 0;
	int count = 0;
	const char *savec;

	if (restriction_percentage(format) == -1 || !format)
		return (-1);

	va_start(ptr, format);
	while (*(format + pos) != '\0')
	{
		savec = (format + pos);
		if (*savec == '%' && *(save + 1) != '%')
		{
			len = match_case(savec + 1)(ptr);
			if (len == -1)
				return (-1);

			tmp += len;

			pos = pos + 2;
			savec = (format + pos);
		}
		if (*(savec) == '%' && *(savec + 1) == '%')
			pos++, savec = (format + pos);
		if (*(savec - 1) != '%' && *(savec) == '%' && *(savec + 1) != '%')
			continue;
	}
}
