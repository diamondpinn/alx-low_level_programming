
#include <stdio.h>

/** print_to_98 - Prints all natural numbers from imput to 98,
 *  		  in order seperated by a comma followed by a space.
 *  @n:	The number to begin counting at.
 
 	print_to_98(int n)
{
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n--);
