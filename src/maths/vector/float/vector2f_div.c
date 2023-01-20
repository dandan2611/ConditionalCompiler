/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** vector2f_div
*/

#include <my_maths.h>

vector2f_t *vector2f_divv(vector2f_t *original, vector2f_t *div_vect)
{
    original->x /= div_vect->x;
    original->y /= div_vect->y;
    return (original);
}

vector2f_t *vector2f_divn(vector2f_t *original, float x, float y)
{
    original->x /= x;
    original->y /= y;
    return (original);
}
