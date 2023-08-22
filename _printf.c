/* Custom printf function */
#include "main.h"
int _strlen(char *s);
/**
 * _printf - prints a formatted string
 * @format: first arguemnt
 * Return: returns the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	char c;
	void *ptr;
	char *s;

	va_start(args, format);
	if (!format)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			if (!*(++format))
				return (-1);
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
				format++;
				break;
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
