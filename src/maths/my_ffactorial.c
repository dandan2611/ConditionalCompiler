/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** my_ffactorial
*/

#include <my_maths.h>

float my_ffactorial(float nb)
{
    float result = 1;

    if (nb < 0)
        return (0);
    for (float i = 1; i <= nb; i++)
        result *= i;
    return (result);
}
