/*
 * Test file
 * Author: Asere Oluwatumise s.
 */
#include "../main.h"
#include <stdio.h>
void int_test(void);
/**
 * main - program start
 *
 * Return: return 0
 */
/* int main(void) */
/* { */
/* 	int_test(); */

/* 	return (0); */
/* } */
/**
 * int_test - test the d and i spec conversion
 *
 */
void int_test(void)
{
	int len1 = 0, len2 = 0;

	len1 = _printf("1024: %d", 1024);
	len2 = printf(" %d", 1024);
	putchar('\n');
	_printf("len1: %d, len2: %d", len1, len2);
	putchar('\n');
	_printf("-1024: %d", -1024);
	printf(" %d", -1024);
	putchar('\n');
	_printf("0: %d", 0);
	printf(" %d", 0);
	putchar('\n');
	_printf("INT_MAX: %d", INT_MAX);
	printf(" %d", INT_MAX);
	putchar('\n');
	_printf("INT_MIN: %d", INT_MIN);
	printf(" %d", INT_MIN);
	putchar('\n');
	_printf("UINT_MAX: %d", UINT_MAX);
	printf(" %d", UINT_MAX);
	putchar('\n');
	_printf("UINT_MAX + 1024: %d", UINT_MAX + 1024);
	printf(" %d", UINT_MAX + 1024);
	putchar('\n');
}
