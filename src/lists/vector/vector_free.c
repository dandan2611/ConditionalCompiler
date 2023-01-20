/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** vector_free
*/

#include <my_lists.h>
#include <my_memory.h>

void vector_free(vect_t *vect)
{
    vector_free_content(vect);
    my_free(vect);
}
