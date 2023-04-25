#include "main.h"

/**
 * print_str - function that prints a string
 * @manu: parameter for variadic
 *
 * Return: number of characters printed
 */

int print_str(va_list manu)
{
	int j, value;
	int count = 0;
	char *str;

	str = va_arg(manu, char *);
	if (str == NULL)
		return (-1);

	while (str[j])
	{
		write(1, &str[j], 1);
		j++;
		count = sizeof(str) - 1;
	}
	return (count);
}
