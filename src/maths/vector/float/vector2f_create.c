/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** vector2f_create
*/

#include <my_maths.h>
#include <my_memory.h>
#include <my_const.h>

vector2f_t *vector2f_create(float x, float y)
{
    vector2f_t *vect = my_malloc(sizeof(vector2f_t));

    if (vect == MY_NULL)
        return MY_NULL;
    return (vector2f_init(vect, x, y));
}
