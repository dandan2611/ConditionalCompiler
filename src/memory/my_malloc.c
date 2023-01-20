/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** my_malloc
*/

#include <my_memory.h>
#include <my_const.h>
#include <stdlib.h>

void *my_malloc(size_t size)
{
    size_t final_size = sizeof(size_t) + size;

    if (size == 0)
        return MY_NULL;
    void *ptr = malloc(final_size);

    if (ptr == MY_NULL)
        return MY_NULL;
    *((size_t *) ptr) = size;
    return ptr + sizeof(size_t);
}
