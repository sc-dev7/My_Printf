/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** ok
*/

#include "includes/my.h"

char parcours(char *str, char c)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (c == str[i]) {
            return 1;
        }
    }
    return 0;
}
