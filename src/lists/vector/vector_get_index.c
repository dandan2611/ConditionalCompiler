/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** vector_get_index
*/

#include <my_lists.h>
#include <my_const.h>
#include <my_memory.h>

void *vector_get_index(vect_t *vect, int index)
{
    if (vect->elements < (index + 1))
        return MY_NULL;
    return vect->data + (index * vect->element_size);
}
