/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** ok
*/

#include "includes/my.h"

int b_flag(va_list ap)
{
    int nb = va_arg(ap, int);
    int c = nb;
    int taille;
    int i = 0;
    for (taille = 0; c != 0; taille++) {
        c = c / 2;
    }
    char str[taille];
    for (; nb != 0; i++) {
        str[i] = (nb % 2) + 48;
        nb = nb / 2;
    }
    str[i] = '\0';
    my_revstr(str);
    my_putstr(str);
}
