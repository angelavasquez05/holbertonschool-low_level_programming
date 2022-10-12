#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * File: 2-print_alphabet.c
*/
/**
 * main - "program that prints the alphabet in
 * lowercase"
 * Return: (0)
*/
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
