/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** my_lfactorial
*/

#include <my_maths.h>

long long my_lfactorial(long long n)
{
    long result = 1;

    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}
