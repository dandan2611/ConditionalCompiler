/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** comparator_int
*/

#include <my_comparators.h>
#include <stdint.h>

comp_res_t comparator_uint32(void *a, void *b)
{
    uint32_t *a_int = (uint32_t *) a;
    uint32_t *b_int = (uint32_t *) b;

    if (*a_int == *b_int)
        return COMP_EQUAL;
    if (*a_int < *b_int)
        return COMP_LOWER;
    return COMP_GREATER;
}
