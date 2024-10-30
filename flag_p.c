/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** ok
*/

#include "includes/my.h"

void p_flag(va_list ap)
{
    int ptr = va_arg(ap, int);
    int x = ptr;
    int taille;
    int i = 0;
    char tab[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
    '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    for (taille = 0; x != 0; taille++) {
        x = x / 16;
    }

    char str[taille];
    x = ptr;
    for (; x != 0; i++) {
        str[i] = tab[x % 16];
        x = x / 16;
    }
    str[i] = '\0';
    my_revstr(str);
    my_putstr("0x");
    my_putstr(str);
}
