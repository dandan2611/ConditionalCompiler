/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** comparator_int
*/

#include <my_comparators.h>
#include <stdint.h>

comp_res_t comparator_int64(void *a, void *b)
{
    int64_t *a_int = (int64_t *) a;
    int64_t *b_int = (int64_t *) b;

    if (*a_int == *b_int)
        return COMP_EQUAL;
    if (*a_int < *b_int)
        return COMP_LOWER;
    return COMP_GREATER;
}
