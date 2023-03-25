#include "main.h"

/**
 * _printf - ouputs format string
 * @format: format string passed
 *
 * Return: number of characters outputed
 */

int _printf(const char *format, ...)
{
	va_list parg;
	int a = 0;

	gettype buff[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(parg, format);

	a = handler(format, buff, parg);

	va_end(parg);

	return (a);
}
