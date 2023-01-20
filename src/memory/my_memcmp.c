/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** my_memcmp
*/

#include <my_types.h>
#include <my_memory.h>
#include <stdint.h>

bool_t my_memcmp(void *ptr1, void *ptr2, size_t size)
{
    char *p1 = ptr1;
    char *p2 = ptr2;

    for (size_t i = 0; i < size; i++) {
        if (p1[i] != p2[i])
            return (FALSE);
    }
    return (TRUE);
}
