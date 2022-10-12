#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * File: 8-print_base16.c
*/
/**
 * main - "Prints all the numbers of base 16 in
 * in lowercase"
 * Return: (0)
*/
int main(void)
{
int num;
char let;
for (num = 0; num < 10 ; num++)
{
putchar((num % 10) + '0');
}
for (let = 'a'; let <= 'f'; let++)
{
putchar(let);
}
putchar('\n');
return (0);
}
