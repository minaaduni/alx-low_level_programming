#include "main.h"
#include <unistd.h>
/**
 * _puchar - writes the charater c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returend, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
