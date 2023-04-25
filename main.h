#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int (*scan_spec(const char *format))(va_list);

/**
 * struct cal - struct for specifier to printer
 * @m: character to compare
 * @z: pointer to handle printing
 */
typedef struct cal
{
	char *m;
	int (*z)(va_list);
} cal_t;

int print_char(va_list);
int print_str(va_list);
int print_cent(va_list);

#endif
