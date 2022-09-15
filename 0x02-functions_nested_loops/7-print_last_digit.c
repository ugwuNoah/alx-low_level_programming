#include "main.h"
/**
 *  print_last_digits - a function that pronts the last digits of a number
 *  @n: interger n
 *  Return: ALways 0 if true
 */
int print_last_digits(int n)
{
	int x;

	if (n < 0 )
	{
		if (n < 0)
			n = -n;
		x = n % 10;
			if (x < 0 )
				x = -x;
		_putchar(x = '0');
		return (x);
	}
}
