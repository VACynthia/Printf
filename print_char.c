#include "main.h"

/**
 * print_char - prints a character
 * @grp:variadic parameter
 *
 * Return: number of characters printed
 */

int print_char(va_list grp)
{
	char j = (char)va_arg(grp, int);
	return (write(1, &j, 1));
}
