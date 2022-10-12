#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * File: 5-print_numbers.c
*/
/**
 * main - "Prints all single digit numbers of
 * base 10 starting from 0"
 * Return: (0)
*/
int main(void)
{
int n;
while (n < 10)
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
