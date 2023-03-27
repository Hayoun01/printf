#include "main.h"
/**
 * _putchar - Prints a char
 * @types: List a of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: Width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int _putchar(va_list types, char buffer[],
			 int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);

	return (write_char(c, buffer, flags, width, precision, size));
}

/**
 * _putpercent - Prints a percent sign
 * @types: List of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int _putpercent(va_list types, char buffer[],
				int flags, int width, int precision, int size)
{
	UNUSED(types);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	return (write(1, "%%", 1));
}
