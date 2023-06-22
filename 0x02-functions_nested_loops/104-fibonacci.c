#include <stdio.h>
/**
 * main - program that finds and prints the first 98 Fibonacci number
 * Return: 0 (Success)
 * @n: to be checked
 */
void print_fibonacci(unsigned long int n)
{
unsigned long int i;
unsigned long int a = 1;
unsigned long int b = 2;
printf("%lu, %lu", a, b);
for (i = 3; i <= n; i++)
{
unsigned long int c = a + b;
printf(", %lu", c);
a = b;
b = c;
}
}
int main(void)
{
print_fibonacci(98);
printf("\n");
return (0);
}

