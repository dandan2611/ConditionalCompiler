/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** my_nbr_len
*/

#include <my_maths.h>

int my_nbr_len(long long nb)
{
    int len = 0;

    if (nb == 0)
        return (1);
    if (nb < 0)
        len++;
    while (nb != 0) {
        nb /= 10;
        len++;
    }
    return (len);
}
