#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * File: 0-positive_or_negative.c
*/

/**
 * main - "Program that assigns a random number
 * and prints whether it is positive or negative"
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
  printf("%d is positive\n", n);
}
else
{
  printf("%d is negativo\n", n);
}
return (0);
}
