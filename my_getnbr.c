/*
** EPITECH PROJECT, 2022
** my_getnbr
** File description:
** ok
*/

int set_signe(char c)
{
    if (c == '-') return (-1);
    return (1);
}

int my_getnbr(char const *str)
{
    int start = -1;
    int nb_final = 0;
    double nb = 0;
    int va = -1;
    int signe = 1;

    for (int rn = 0; str[rn] != '\0' && start == -1; rn++) {
        if (str[rn] >= '0' && str[rn] <= '9') start = rn;
        if (str[rn] == '+' || str[rn] == '-') signe *= set_signe(str[rn]);
        if (str[rn] != '+' && str[rn] != '-' && str[rn] < '0' || str[rn] > '9')
            return (nb_final);
    }
    if (start < 0) return (nb);
    for (int rn = start; str[rn] != '\0' && va < 0; rn++) {
        if (str[rn] >= '0' && str[rn] <= '9') nb = nb * 10 + str[rn] - '0';
        if (str[rn] < '0' || str[rn] > '9') va = 1;
    }
    nb *= signe;
    if (nb >= -2147483648 && nb <= 2147483647) nb_final = nb;
    return (nb_final);
}
