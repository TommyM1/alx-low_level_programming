#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the int to check
 * Return: 1 and prints + if n is greater than zero
 *         0 and prints 0 if n is zero
 *        -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
    if (n > 0)
    {
        _putchar('+');
        return 1;
    }
    else if (n == 0)
    {
        _putchar('0');
        return 0;
    }
    else if (n < 0)
    {
        _putchar('-');
        return -1;
    }

    /* This return statement will handle the case when none of the if-else conditions are met.
     * You can choose the appropriate value to return here based on your requirements.
     * For example, returning 0 here to indicate an error or undefined state. */
    return 0;
}
