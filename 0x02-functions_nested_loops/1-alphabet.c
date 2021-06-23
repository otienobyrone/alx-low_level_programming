#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"
#include "0-holberton.c"

/**
 * print_alphabet - check the code for Alx school students.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)

{
char c;

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
}
