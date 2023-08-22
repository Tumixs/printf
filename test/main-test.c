/* Runs all test for _printf*/
#include "../main.h"
#include "test_runner.h"
/**
 * main - program start
 *
 * Return: Always Zero
 */
int main(void)
{
	printf("\n-------Starting char_test..-------\n");
	char_test();
	fflush(stdout);
	printf("\n-------End of char and strings test-------\n");
	printf("\n-------Starting int_test..-------\n");
	int_test();
	fflush(stdout);
	printf("\n-------End of intger test-------\n");
	printf("\n-------Starting bin_test..-------\n");
	bintest();
	fflush(stdout);
	printf("\n-------End of binary test-------\n");
	printf("\n-------Starting utest..-------\n");
	utest();
	fflush(stdout);
	printf("\n-------End of unsigned int test-------\n");
	printf("\n-------Starting oct_test..-------\n");
	oct_test();
	fflush(stdout);
	printf("\n-------End of octal test-------\n");
	printf("\n-------Starting hex_upper_test..-------\n");
	hex_upper_test();
	fflush(stdout);
	printf("\n-------End of hexadecimal_upper test-------\n");
	printf("\n-------Starting holb_test..-------\n");
	holb_test();
	fflush(stdout);
	printf("\n-------End of holberton test-------\n");

	return (0);
}
