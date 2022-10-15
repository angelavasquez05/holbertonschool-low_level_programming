#include "main.h"
/*
 * File: 5-sign.c
*/
/**
 * print_sign - "Write a function that prints the
 * sign of a number"
 * @n: The character to be checked
 * Return: (0)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
