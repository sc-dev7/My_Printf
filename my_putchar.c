/*
** EPITECH PROJECT, 2022
** my_putchar
** File description:
** ok
*/

#include "includes/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
