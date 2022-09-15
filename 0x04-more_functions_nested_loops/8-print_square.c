#include "main.h"

/**
 * print_square - prints hashes in shape of a sqaure
 * @size: size of the sqaure
 * Return: no return
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (i = 0; i < size; j++)
		{
			_putchar(35);
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
