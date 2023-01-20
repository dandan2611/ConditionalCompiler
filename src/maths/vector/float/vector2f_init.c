/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** vector2f_create
*/

#include <my_maths.h>

vector2f_t *vector2f_init(vector2f_t *vector, float x, float y)
{
    vector->x = x;
    vector->y = y;
    return (vector);
}
