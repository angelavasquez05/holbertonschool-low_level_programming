#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * File: 3-print_alphabets.c
*/
/**
 * main - "prints the alphabet in lowercase,
 * and then in uppercase"
 * Return: (0)
*/
int main(void)
{
char ch = 'a', CH = 'A';
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
