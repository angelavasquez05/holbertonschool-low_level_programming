#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * File: 6-print_numberz.c
*/
/**
 * main - "Prints all single digit numbers of
 * base 10 starting from 0
 * not use any variable of type char"
 * Return: (0)
*/
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar((num % 10) + '0');
}
putchar('\n');
return (0);
}
