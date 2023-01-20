/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** vector_remove
*/

#include <my_lists.h>
#include <my_const.h>
#include <my_memory.h>

void vector_remove_data(vect_t *vect, void *data)
{
    int index = vector_data_index(vect, data);

    while (index != MY_UNDEFINED) {
        vector_remove_index(vect, index);
        index = vector_data_index(vect, data);
    }
}
