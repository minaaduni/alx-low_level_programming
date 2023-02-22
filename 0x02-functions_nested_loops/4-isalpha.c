#include "main.h"

/**
 *_isalpha - checks for alpahabetic character
 *@c: Charcter to be checked 
 * Return: 1 if c is a leter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'));
}
