/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** ok
*/

#include "includes/my.h"

int octal(int nb)
{
    int a = nb;
    int taille;
    for (taille = 0; a != 0; taille++) {
        a = a / 8;
    }
    char str[taille];
    a = nb;
    for (int i = 0; a != 0; i++) {
        str[i] = (a % 8) + 48;
        a = a / 8;
    }
    my_revstr(str);
    my_putstr(str);
}

char *ss_flag(va_list ap)
{
    char *str = va_arg(ap, char *);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] >= 127) {
            my_putchar('\\');
            my_putnbr(0);
            octal(str[i]);
        } else {
            my_putchar(str[i]);
        }
    }
}
