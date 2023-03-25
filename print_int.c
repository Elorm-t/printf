#include "main.h"

/**
 * print_int - funtion to print integers
 * @parg_int: argument pointer to next argument in list of variable args
 *
 * Return: number of characters printed
 */

int print_int(va_list parg_int)
{
	int a, expo = 1, len = 0;
	unsigned int n;

	a = va_arg(parg_int, int);

	if (a < 0)
	{
		len = len + _putchar('-');
		n = a * -1;
	}
	else
		n = a;

	while (n / expo > 9)
		expo *= 10;

	while (expo != 0)
	{
		len = len + _putchar(n / expo + '0');
		n = n % expo;
		expo = expo / 10;
	}

	return (len);
}
