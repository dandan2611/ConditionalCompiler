/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** my_fsqrt
*/

#include <my_maths.h>

float my_fsqrt(float nb)
{
    float result = 1;

    if (nb < 0)
        return (0);
    if (nb == 0)
        return (0);
    while (result * result - nb > FSQRT_PRECISION
        || result * result - nb < -FSQRT_PRECISION)
        result = (result + nb / result) / 2;
    return (result);
}
