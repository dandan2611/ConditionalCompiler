/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** vector_create
*/

#include <my_lists.h>
#include <my_memory.h>
#include <my_const.h>

void *vector_create(int elements, size_t element_size)
{
    vect_t *vect = my_malloc(sizeof(vect_t));

    if (!vect)
        return MY_NULL;
    vect->elements = elements;
    vect->element_size = element_size;
    vect->data = my_calloc((elements) * element_size);
    return vect;
}
