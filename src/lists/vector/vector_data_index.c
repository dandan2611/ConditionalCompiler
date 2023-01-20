/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** vector_data_index
*/

#include <my_lists.h>
#include <my_const.h>
#include <my_memory.h>
#include <my_comparators.h>

int vector_data_index(vect_t *vect, void *data)
{
    for (int i = 0; i < vect->elements; i++) {
        if (my_memcmp(vector_get_index(vect, i), data, vect->element_size))
            return i;
    }
    return MY_UNDEFINED;
}
