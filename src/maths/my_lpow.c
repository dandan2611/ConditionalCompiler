/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** my_lpow
*/

#include <my_maths.h>

long long my_lpow(long long nb, int pow)
{
    long long res = 1;

    if (pow == 0)
        return (1);
    if (pow < 0)
        return (0);
    for (int i = 0; i < pow; i++)
        res *= nb;
    return (res);
}
