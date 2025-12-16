#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
    int i;       /* counter for 10 times */
    char c;

    for (i = 0; i < 10; i++)   /* repeat 10 times */
    {
        c = 'a';
        while (c <= 'z')       /* print a-z using while loop */
        {
            _putchar(c);
            c++;
        }
        _putchar('\n');        /* new line after each alphabet */
    }
}
