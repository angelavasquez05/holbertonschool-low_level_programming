#include "main.h"
/*
 * File: 4-isalpha.c
*/
/**
 * _isalpha - "Write a function that checks for
 * alphabetic character"
 * @c: The character to be checked
 * Return: (0)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
