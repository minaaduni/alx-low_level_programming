#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int | = 0;
	int x = 0;

	while (*(src + |) != '\0')
	{
		|++;
	}
	for ( ; x < | ; x++)
	{
		dest[x] = src[x];
	}
	dest[|] = '\0';
	return (dest);
}
