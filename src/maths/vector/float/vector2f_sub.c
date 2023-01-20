/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** vector2f_sub
*/

#include <my_maths.h>

vector2f_t *vector2f_subv(vector2f_t *original, vector2f_t *sub_vect)
{
    original->x -= sub_vect->x;
    original->y -= sub_vect->y;
    return (original);
}

vector2f_t *vector2f_subn(vector2f_t *original, float x, float y)
{
    original->x -= x;
    original->y -= y;
    return (original);
}
