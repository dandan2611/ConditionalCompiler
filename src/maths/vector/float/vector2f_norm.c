/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** vector2f_norm
*/

#include <my_maths.h>

float vector2f_norm(vector2f_t *vector)
{
    return (my_fsqrt(my_fpow(vector->x, 2) + my_fpow(vector->y, 2)));
}
