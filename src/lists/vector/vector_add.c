/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** vector_data
*/

#include <my_lists.h>
#include <my_memory.h>
#include <my_const.h>

void vector_add(vect_t *vect, void *data)
{
    if (vect->data == MY_NULL) {
        vect->data = my_malloc(vect->element_size);
    } else if (my_memsize(vect->data) <
        (vect->elements + 1) * vect->element_size) {
        vect->data = my_realloc(vect->data,
            vect->elements * 2 * vect->element_size);
    }
    my_memcpy(data, vect->data + (vect->elements * vect->element_size), \
        vect->element_size);
    vect->elements++;
}

void vector_fadd(vect_t *vect, void *data)
{
    vector_add(vect, data);
    my_free(data);
}
