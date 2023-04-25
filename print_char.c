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
	int count = 0;

	if (j)
	{
		count = write(1, &j, 1);
		j++;
		return (count);
	}
	return (0);
}
