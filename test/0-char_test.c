/* Test file */
#include "../main.h"
#include <stdio.h>
#include <unistd.h>
void char_test(void);
/**
 * main - test program
 *
 * Return: always zero
 */
/* int main(void) */
/* { */
/* 	char_test(); */
/* 	return (0); */
/* } */

/**
 * wrongspecifier - test file for invalid conversion specifiers
 */
void char_test(void)
{
	int len1, len2, len3, len4, len5, len6 = 0;
	char *str1 = "I can print this";
	/* char *str2 = "I cannot print this";*/

	/* Testing where spec does not exist */
	len1 = printf("%");
	len2 = _printf("%");
	printf("----\n");
	len3 = printf("%!\n");
	len4 = _printf("%!\n");
	len5 = printf("%y\n");
	len6 = _printf("%k\n");
	printf("%d\n%d\n%d\n%d\n%d\n%d\n", len1, len2, len3, len4, len5, len6);
	/* End of test */


	_printf("%: %%");
	printf(" %%");
	putchar('\n');
	_printf("I just printed this with `_printf`\n");
	printf("I just printed this with `printf`\n");
	_printf("%s with _printf\n", str1);
	printf("%s with printf\n", str1);
	printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");

	/*Tested the next function to decide if asignment to NULL arg does not overwrite contagious memerory, hence multiple args used in test case*/
	printf("Complete the sentence: You %s (%s) (%s) nothing, Jon Snow.\n", NULL, str1, "hello");
	_printf("Complete the sentence: You %s (%s) (%s) nothing, Jon Snow.\n", (char *)0, str1, "hello");
	/* End of test */

	printf("How");
}
