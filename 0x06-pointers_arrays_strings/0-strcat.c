#include "main.h"
/**
 * _strcat - concatenantes two strings
 * @dest: destination
 * @src: source
 * REturn: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	while(*(dest + count) != '\0')
	{
		count++;
	}

	while (count >= 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return(dest);
}
