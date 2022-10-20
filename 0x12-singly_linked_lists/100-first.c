#include <stdio.h>

/*using constructors*/
void main_constructor(void) __attribute__((constructor));
/**
 * main_constructor - a constructor function that printss a message
 * before main runs
 * Return: nothing
 */
void main_constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("1 bore my house upon my back!\n");
}
