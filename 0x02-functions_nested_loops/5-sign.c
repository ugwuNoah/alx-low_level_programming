#include "main.h"

/**
 *  print_sign - prints sign of a number
 *  @n: number check
 *  Return: 1 if greater than 0, 0 if 0, -1 if less tahn 0
 */

int print_sign(int n)
{
	if ( n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0);
	{
		_putchar('o');
		return(0);
	}
	else
	{
		_putchar('-');
		return(-1);
	}
}
