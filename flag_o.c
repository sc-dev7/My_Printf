/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** ok
*/

#include "includes/my.h"

int o_flag(va_list ap)
{
    int nb = va_arg(ap, int);
    int x = nb;
    int taille;
    int i = 0;
    for (taille = 0; x != 0; taille++) {
        x = x / 8;
    }
    char str[taille];
    int a = nb;
    for (; a != 0; i++) {
        str[i] = (a % 8) + 48;
        a = a / 8;
    }
    str[i] = '\0';
    my_revstr(str);
    my_putstr(str);
}
