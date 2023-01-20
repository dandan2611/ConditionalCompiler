/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** my_memset
*/

#include <my_memory.h>
#include <my_const.h>

void *my_memset(void *ptr, char value, size_t size)
{
    char *p = ptr;

    for (size_t i = 0; i < size; i++)
        p[i] = value;
    return ptr;
}
