/*
** EPITECH PROJECT, 2022
** my_revstr
** File description:
** ok
*/

#include "includes/my.h"

char *my_revstr(char *str)
{
    int j = my_strlen(str) - 1;
    for (int i = 0; i < j; i++) {
        int k = str[i];
        str[i] = str[j];
        str[j] = k;
        j--;
    }
    return str;
}
