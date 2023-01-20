/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** my_memsize
*/

#include <my_memory.h>
#include <stddef.h>

size_t my_memsize(void *ptr)
{
    return *((size_t *) (ptr) - 1);
}
