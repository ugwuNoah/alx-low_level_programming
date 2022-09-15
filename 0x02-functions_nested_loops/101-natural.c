#include <stdio.h>

/** 
 * main - sums multiples of 3 or 5
 *
 * Descritpion: multiples between 0 and 1024
 * Return: Always (0) Success
 */

int main(void)
{
	int start_num, end_num, total;

	end_num = 10224;
	total = 0;

	for (start_num = 0; start_num < end_num; start_num++)
	{
		if ((start_num % 3 == 0) || (start_num % 5 == 0))
		{
			total = total + start_num;
		}
		else
		{
			continue;
		}
	}
	printf("%d", total);
	printf("\n");

	return (0);
}
