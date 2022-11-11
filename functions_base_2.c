#include "main.h"
/**
 * digit_case_S - custom conversion specifier
 * @ptr: A variable that points to a list of arguments
 *
 * Return: length of string added to buffer
 */
int digit_case_S(va_list ptr)
{
	int pos = 0, len = 0;
	char *save = va_arg(ptr, char *);

	if (save == NULL)
	{
		if ((32 > *(save + pos)) || *(save + pos) >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len += 2;
			len += convert_base(16, *(save + pos), 2);
			pos++;
			if (*(save + pos) == '\0')
				break;
		}
		len += _putchar(*(save + pos++));
	}
	return (len);
}
