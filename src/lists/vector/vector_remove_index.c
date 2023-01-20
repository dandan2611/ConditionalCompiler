/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** vector_remove_index
*/

#include <my_lists.h>
#include <my_const.h>
#include <my_memory.h>

void vector_remove_index(vect_t *vect, int index)
{
    if (vect->elements < (index + 1))
        return;
    my_memcpy(vect->data + ((index + 1) * vect->element_size), \
        vect->data + (index * vect->element_size), \
        (vect->elements - index) * vect->element_size);
    vect->elements--;
}
