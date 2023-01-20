/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** my_memswap
*/

#include <my_memory.h>
#include <my_const.h>
#include <stddef.h>

void my_memswap(void *a, void *b, size_t size)
{
    char *tmp = my_malloc(size);

    my_memcpy(a, tmp, size);
    my_memcpy(b, a, size);
    my_memcpy(tmp, b, size);
    my_free(tmp);
}
