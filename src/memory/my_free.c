/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** my_free
*/

#include <my_memory.h>
#include <my_const.h>
#include <stdlib.h>

void my_free(void *ptr)
{
    if (ptr == MY_NULL)
        return;
    free(ptr - sizeof(size_t));
}
