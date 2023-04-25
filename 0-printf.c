#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: pointer to a character string
 * @...: variadic parameters (unknown)
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, count = 0, value = 0;
	va_list grp;
	int (*z)(va_list);

	va_start(grp, format);
	if (format == NULL)
		return (-1); /*Function stops*/
	while (format[i])
	{
		if (format[i] != '%')
		{
			value = write(1, (&format[i]), 1);
			count += value; /*Placeholder + 1*/
			i++;
		}
		if (format[i] == '%')
		{
			z = scan_spec(&format[i + 1]);
			if (z != NULL)
			{
				value = z(grp);
				count += value;
				i += 2;
				continue;
			}
			if (format[i + 1] == '\0')
			{
				break;
			}
			if (format[i + 1] != '\0')
			{
				value = write(1, (&format[i + 1]), 1);
				count += value;
				i += 2;
				continue;
			}
		}
	}
	return (count);
}

/**
 * print_cent - prints the character %
 * @grp: variadic specifier
 *
 * Return: number of characters printed
 */

int print_cent(va_list grp)
{
	(void)manu;

	write(1, "%", 1);
	return (1);
}
