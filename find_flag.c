/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** ok
*/

#include "includes/my.h"

int find_flag(va_list ap, char c)
{
    (c == 'd' || c == 'i') ? u_flag(ap) : 0;
    (c == 's') ? my_putstr_f(ap) : 0;
    (c == 'c') ? my_putchar_f(ap) : 0;
    (c == '%') ? my_putchar('%') : 0;
    (c == 'b') ? b_flag(ap) : 0;
    (c == 'S') ? ss_flag(ap) : 0;
    (c == 'o') ? o_flag(ap) : 0;
    (c == 'u') ? u_flag(ap) : 0;
    (c == 'x') ? x_flag(ap) : 0;
    (c == 'X') ? xx_flag(ap) : 0;
    (c == 'p') ? p_flag(ap) : 0;
}
