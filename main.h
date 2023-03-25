#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
* struct gettype - structure def to check for format
* @type: format type to print
* @f: function to print a character 
*/

typedef struct gettype
{
	char *type;
	int (*f)();
} gettype;


int _putchar(char c);
int _printf(const char *format, ...);
int handler(const char *format, gettype *str_arr, va_list parg);
int print_char(va_list parg_ch);
int print_str(va_list parg_str);

#endif /* MAIN_H */
