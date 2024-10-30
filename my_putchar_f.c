/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** ok
*/

#include "includes/my.h"

void my_putchar_f(va_list ap)
{
    int c = va_arg(ap, int);
    write(1, &c, 1);
}
