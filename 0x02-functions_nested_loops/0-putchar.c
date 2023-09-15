#include "main.h"
#include "unistd.h"
/**
*main - is the entry point for the program
*Description: Prints _putchar using putchar prototype
*Return: Always 0 (success)
*/
int main(void)
{
	char str[] = "_putchar";

	for (int ch = 0; ch < 8; ch++)
	_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
