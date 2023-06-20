#include "main.h"
/**
 * is_alpha - checks for alphabetic character
 * @c: char to be checked
 * Return: 0 if c is a letter else 0
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
else 
{
return (0);
}
}
