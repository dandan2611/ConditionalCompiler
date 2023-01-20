/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** my_realloc
*/

#include <my_memory.h>
#include <my_const.h>
#include <stddef.h>

void *my_realloc(void *from, size_t new_size)
{
    size_t previous_size = my_memsize(from);
    void *new_ptr = my_malloc(new_size);

    if (new_ptr == MY_NULL)
        return MY_NULL;
    my_memcpy(from, new_ptr, previous_size);
    my_free(from);
    return new_ptr;
}
