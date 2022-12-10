#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main - returns alphabets both lower and upper cases
 * Return: Always 0 (Success)
 *Description: 'the program's description'
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
