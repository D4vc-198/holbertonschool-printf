#include "main.h"

/**
 * _putchar - write the character
 * @c: character to print
 * Return: 1 always (success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - prints a string
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	int x = 0;

	while (str[x] != 0)
	{
		_putchar(str[x]);
		x++;
	}
}

/**
 * _strlen - lenght of a string
 * @s: string
 * Return: lenght of a string
 */

int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
		x++;
	return (x);
}

/**
 * _strcpy - copy string pointed to src
 *
