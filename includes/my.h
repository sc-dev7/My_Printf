/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** ok
*/

#pragma once

#include <sys/types.h>
    #include <fcntl.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <stdarg.h>
    #include <stdbool.h>
    #include <stdarg.h>

    void my_putchar(char c);
    int my_putnbr(int nb);
    void my_putstr(char const *str);
    char *my_strcpy(char *dest, char const *src);
    int my_strlen(char const *str);
    int my_getnbr(char const *str);
    int my_strncmp(char const *s1, char const *s2, int n);
    char *my_revstr(char *str);
    int u_flag(va_list ap);
    void my_putchar_f(va_list ap);
    int my_putstr_f(va_list ap);
    int b_flag(va_list ap);
    char *ss_flag(va_list ap);
    int o_flag(va_list ap);
    int x_flag(va_list ap);
    int xx_flag(va_list ap);
    void p_flag(va_list ap);
    char parcours(char *str, char c);
    int find_flag(va_list ap, char c);
    void format_flag(va_list ap, char c);
    int my_printf(const char *format, ...);
