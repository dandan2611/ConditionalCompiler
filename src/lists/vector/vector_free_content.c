/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** vector_free_content
*/

#include <my_lists.h>
#include <my_const.h>
#include <my_memory.h>

void vector_free_content(vect_t *vect)
{
    my_free(vect->data);
    vect->elements = 0;
    vect->data = MY_NULL;
}
