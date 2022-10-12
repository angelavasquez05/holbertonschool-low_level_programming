#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * File: 7-print_tebahpla.c
*/
/**
 * main - "Prints prints the lowercase alphabet
 * in reverse,
 * Return: (0)
*/
int main(void)
{
char c;
for (c = 'z'; c >= 'a' ; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
