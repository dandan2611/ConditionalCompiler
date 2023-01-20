/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** vector2f_normalize
*/

#include <my_maths.h>

vector2f_t *vector2f_normalize(vector2f_t *vector)
{
    float norm = vector2f_norm(vector);

    if (norm == 0)
        return (vector);
    vector->x /= norm;
    vector->y /= norm;
    return (vector);
}
