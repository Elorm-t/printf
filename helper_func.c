#include "main.h"

/**
 * handler - function to check which format specifier to print
 * @format: format string passed as compulsory argument
 * @str_arr: array of struct ops
 * @parg: list of arguments to print
 *
 * Return: number of characters to be printed
 */

int handler(const char *format, gettype *str_arr, va_list parg)
{
	char a;
	int len = 0, b = 0, c = 0;

	a = format[b];

	while (a != '\0')
	{
		if (a == '%')
		{
			c = 0;
			b++;
			a = format[b];

			while (str_arr[c].type != NULL && a != *(str_arr[c].type))
				c++;
			if (str_arr[c].type != NULL)
				len = len + str_arr[c].f(parg);
			else
			{
				if (a == '\0')
					return (-1);
				if (a != '%')
					len += _putchar('%');
				len += _putchar(a);
			}
		}
		else
			len += _putchar(a);
		b++;
		a = format[b];
	}
	return (len);
}
