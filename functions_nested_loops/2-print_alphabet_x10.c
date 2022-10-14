#include "main.h"
/*
 * File: 2-print_alphabet_x10.c
*/
/**
 * print_alphabet_x10 - "Write a function that prints 10 times
 * the alphabet, in lowercase"
 * Return: (0)
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
