/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** parse_int
*/

#include <my_inputs.h>

long long int parse_int(const char *str)
{
    long long int nb = 0;
    int i = 0;
    int neg = 1;

    if (str[0] == '-') {
        neg = -1;
        i++;
    }
    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9')
            return (0);
        nb = nb * 10 + str[i] - '0';
        i++;
    }
    return (nb * neg);
}
