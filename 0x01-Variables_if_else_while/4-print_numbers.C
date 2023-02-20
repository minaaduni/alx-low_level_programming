#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line,except q and 0
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char ch ='a';

	while(ch <= 'z')
	{
		if(ch !='0'&& ch!='q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);

}
