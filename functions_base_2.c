#include "main.h"
/**
 * digit_case_S - custom conversion specifier
 * @ptr: A variable that points to a list of arguments
 *
 * Return: length of string added to buffer
 */
int digit_case_S(va_list ptr)
{
	int pos = 0, tmp = 0, len = 0;
	char *save = va_arg(ptr, char *);
	char c;

	if (save == NULL)
	{
		_puts("(null)");
		return (6);
	}
	while (*(save + tmp))
	{
		c = *(save + tmp);

		if ((0 < c && 32 > c) || c >= 127)
		{
			_putchar('\\');
			pos++;
			_putchar('x');
			pos++;
			len = convert_base(16, c, 2);
			pos = pos + len;
			c = *(save + tmp + 1);
			tmp++;
			if (c == '\0')
				break;
		}
		_putchar(c);
		pos++;
		tmp++;
	}
	return (pos + tmp);
}
