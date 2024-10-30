/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** ok
*/

#include "includes/my.h"

int my_printf(const char *format, ...)
{
    va_list ap;
    va_start(ap, format);
    char *flag = "discbSouxXp";
    int j = 0;
    for (int i = 0; format[i] != '\0'; i++) {
        j = 0;
        (format[i] == '%' && parcours(flag, format[i + 1]) == 1 && j == 0) ?
        (find_flag(ap, format[i + 1]), i++, j++) : 0;
        (format[i] == '%' && format[i + 1] == '%' && j == 0) ?
        (my_putchar('%'), i++, j++) : 0;
        (j == 0) ? my_putchar(format[i]) : 0;
    }
    va_end(ap);
}
