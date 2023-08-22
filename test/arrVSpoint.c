/* Testing array and pointer method of accessing strings*/
#include <stdio.h>
/**
 * main - array vs pointer vs STRINGS
 *
 * Return: always 0
 */
int main(void)
{
	char *str1 = "I am here";      /* String literal defined with pointer */
	char str2[] = "I am not here";/*String literal defined with arrays */
	char str3[9];
	int i;

	for (i = 0; *str1 != '\0'; i++)
		str3[i] = (*str1++);
	printf("%s\n", str3);
	/* Prints each char till '/0'*/
	/* printf("%s\n", str1); */	 
	/*prints value stored at the index address */
	/* printf("%c\n", str1[8]); */
	/* Move pointer address fwd (+1) */
	/* str1++; */			 
	/* move pointer address fwd (+1) */
	/* str1++; */			 
	/* Prints from new address index (address +2) */
	/* printf("%s\n", str1); */	 
	/* index is now ahead of inital address (+2) */
	/* printf("%c\n", str1[0]); */ 
	printf("%s\n", str2);
	printf("%lu\n", sizeof(str1));
	printf("%lu\n", sizeof(str2));
	printf("%p\n", (&str2));


	return (0);
}
