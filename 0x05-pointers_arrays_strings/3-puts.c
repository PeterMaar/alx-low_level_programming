#include "main.h"
/**
 * _puts - prints a string, folloed by a new line, to stdout
 * @str: string
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
