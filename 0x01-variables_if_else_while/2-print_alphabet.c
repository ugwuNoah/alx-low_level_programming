#include <stdio.h>

/** 
 * main - prints the alphabets
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char alp[36] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}

