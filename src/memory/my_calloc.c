/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** my_calloc
*/

#include <my_memory.h>
#include <my_const.h>

void *my_calloc(size_t size)
{
    void *ptr = my_malloc(size);

    if (ptr == MY_NULL)
        return MY_NULL;
    my_memset(ptr, 0, size);
    return ptr;
}
