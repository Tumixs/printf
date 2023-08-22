/* Custom printf function */
#include "main.h"
#include <stdio.h>
int _strlen(char *s);
/**
 * _printf - prints a formatted string
 * @format: first arguemnt
 * Return: returns the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count;
	char c;
	void *ptr;
	char *s;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			++format;
			switch (*format)
			{
			case 'c':
				c = (char)va_arg(args, int);
				ptr = &c;
				count += write(STDIN_FILENO, ptr, 1);
				format++;
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(null)";
				ptr = s;
				count += write(STDIN_FILENO, ptr, _strlen(s));
				format++;
				break;
			case '%':
				c = '%';
				ptr = &c;
				count += write(STDIN_FILENO, ptr, 1);
				break;
			case '\0':
				return (-1);
			default:
				c = '%';
				ptr = &c;
				count += write(STDIN_FILENO, ptr, 1);
				count += write(STDIN_FILENO, format, 1);
				format++;
				break;
			}
			continue;
		}
		write(STDOUT_FILENO, format, 1);
		++format;
		++count;
	}

	return (count);
}

/**
 * _strlen - returns the lenght of a string
 * @s: string address
 * Return: returns the lenght of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		++i;

	return (i);
}
