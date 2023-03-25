#include "main.h"

/**
 * print_str - prints string to stdout
 * @parg_str: argument pointer to next argument in list of variable args
 *
 * Return: number of characters
 */

int print_str(va_list parg_str)
{
	int len;
	char *str;

	str = va_arg(parg_str, char *);

	if (str == NULL)
		str = "(null)";
	len = 0;

	while (str[len] != '\0')
		len = len + _putchar(str[len]);
	return (len);
}
