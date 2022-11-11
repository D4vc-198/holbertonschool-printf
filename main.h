#ifndef HEADER_H
#define HEADER_H

#include <stdgarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);

/**
 * struc case_match - stores a flag and function
 * @c: pointer to the flag
 * @f: pointer to function
 *
 *Description: Longer description
 */
typedef struct case_match
{
	char *c;
	int (*f)(va_list, char **);
} c_mtc;
/* ------------------------------------*/
int _putchar(char *, int);
int _strlen(char *);
char *_strcpy(char *, char *);
char *_strcat(char *, char *);
/* --------------------------- */
int char_case(va_list, char **);
int string_case(va_list, char **);
int digit_case_u(va_list ptr, char **);
int digit_case_S(va_list ptr, char **);
int digit_case_address(va_list ptr, char **);

int digit_base_10(va_list, char **);
int digit_base_2(va_list, char **);
int digit_base_8(va_list, char **);
int digit_base_16_lower(va_list, char **);
int digit_base_16_upper(va_list, char **);

int rot13(va_list list, char **add);
/*------------------------------------*/
int restriction_percentage(const char *str);
int (*match_case(const char *))(va_list, char **);
int convert_base(int base, long int number, int band, char **);
/*Task to print number*/
int print_number(long int n, char **add);

#endif
