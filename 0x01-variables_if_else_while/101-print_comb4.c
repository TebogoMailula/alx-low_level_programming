#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: 0 (Success)
 */
int main(void)
{
int i;
int j;
int k;
for (i = '0'; i < '9'; i++)
{
for (j = i + 1; j <= '9'; j++)
{
for (k = j + 1; j <= '9'; k++)
if ((j != i) != k)
{
putchar(i);
putchar(j);
putchar(k);
if (i == '7' && j == '8')
{
continue;
}
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
