/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** my_fpow
*/

#include <my_maths.h>

float my_fpow(float nb, int power)
{
    float result = 1;

    if (power == 0)
        return (1);
    if (power < 0)
        return (0);
    for (int i = 0; i < power; i++)
        result *= nb;
    return (result);
}
