#include <stdio.h>
/**
 * main - program that finds and prints the first 98 Fibonacci numbers
 * Return: 0 (Success)
 * @n: to be checked
 */
#include <stdio.h>

void print_fibonacci(int n)
{
int i;
int a = 1;
int b = 2;
printf("%d, %d", a, b);
for (i = 3; i <= n; i++)
{
int c = a + b;
printf(", %d", c);
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

