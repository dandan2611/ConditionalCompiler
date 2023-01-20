/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** vector2f_add
*/

#include <my_maths.h>

vector2f_t *vector2f_addv(vector2f_t *original, vector2f_t *add_vect)
{
    original->x += add_vect->x;
    original->y += add_vect->y;
    return (original);
}

vector2f_t *vector2f_addn(vector2f_t *original, float x, float y)
{
    original->x += x;
    original->y += y;
    return (original);
}
