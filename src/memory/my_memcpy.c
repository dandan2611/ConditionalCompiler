/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** my_memcpy
*/

#include <my_memory.h>

void *my_memcpy(void *from, void *to, size_t size)
{
    if (from < to) {
        for (size_t i = size; i > 0; i--)
            ((char *) to)[i - 1] = ((char *) from)[i - 1];
    } else {
        for (size_t i = 0; i < size; i++)
            ((char *) to)[i] = ((char *) from)[i];
    }
    return to;
}
