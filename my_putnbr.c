/*
** EPITECH PROJECT, 2022
** my_putnbr
** File description:
** ok
*/

#include "includes/my.h"

int my_putnbr(int nb)
{
    if (nb == -2147483648) {
        my_putstr("-2147483648");
        return (0);
    }
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    if (nb > 9) {
        my_putnbr(nb / 10);
        nb %= 10;
    }
    my_putchar(nb % 10 + '0');
    return (0);
}
