/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** vector2f_dup
*/

#include <my_maths.h>

vector2f_t *vector2f_dup(vector2f_t *vector)
{
    return vector2f_create(vector->x, vector->y);
}
