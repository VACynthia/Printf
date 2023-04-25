#include "main.h"
#include <string.h>

/**
 * print_str - function that prints a string
 * @grp: parameter for variadic
 *
 * Return: number of characters printed
 */

int print_str(va_list grp)
{
	int j = 0;
	int count = 0;
	char *str;

	str = va_arg(grp, char *);
	if (str == NULL)
		return (-1);

	while (str[j] != '\0')
	{
		write(1, &str[j], 1);
		j++;
		count++;
	}

	return (count);
}
