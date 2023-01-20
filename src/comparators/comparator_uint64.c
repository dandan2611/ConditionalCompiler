/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** int_comparator
*/

#include <my_comparators.h>
#include <stdint.h>

comp_res_t comparator_uint64(void *a, void *b)
{
    uint64_t *a_int = (uint64_t *) a;
    uint64_t *b_int = (uint64_t *) b;

    if (*a_int == *b_int)
        return COMP_EQUAL;
    if (*a_int < *b_int)
        return COMP_LOWER;
    return COMP_GREATER;
}
