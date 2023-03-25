#include "main.h"

/**
 * print_char - function to return character
 * @parg_ch: argument pointer to next argument in list of variable args
 *
 * Return: number of characters printed
 */

int print_char(va_list parg_ch)
{
	return (_putchar(va_arg(parg_ch, int)));
}
