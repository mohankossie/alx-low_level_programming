#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 * written by mohankossie
 * Return: 0
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
