#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * File: 100-print_comb3.c
*/
/**
 * main - "Prints all possible different combinations
 * of two digits"
 * Return: (0)
*/
int main(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 1; j < 10; j++)
{
putchar((i % 10) + '0');
putchar((j % 10) + '0');
if (i == 9 && j == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
