/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** ok
*/

#include "includes/my.h"

int my_put_nbr_u(unsigned int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb >= 10)
        my_put_nbr_u(nb / 10);
    my_putchar((nb % 10) + 48);
}

void put_error_u(unsigned int i)
{
    long nb2 = i;
    if (nb2 == 0)
        my_putchar('0');
    if (nb2 > 4294967295)
        my_put_nbr_u(4294967295 + nb2);
}

int u_flag(va_list ap)
{
    unsigned int nb = va_arg(ap, unsigned int);
    if (nb > 0 && nb < 4294967295) {
        if (nb < 0) {
            nb = (4294967295 - nb);
            my_put_nbr_u(nb);
        }
        if (nb >= 10) {
            my_put_nbr_u(nb / 10);
        }
        my_putchar((nb % 10) + 48);
    } else
        put_error_u(nb);
}
