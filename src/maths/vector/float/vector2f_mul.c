/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** vector2f_mul
*/

#include <my_maths.h>

vector2f_t *vector2f_mulv(vector2f_t *original, vector2f_t *mul_vect)
{
    original->x *= mul_vect->x;
    original->y *= mul_vect->y;
    return (original);
}

vector2f_t *vector2f_muln(vector2f_t *original, float x, float y)
{
    original->x *= x;
    original->y *= y;
    return (original);
}
