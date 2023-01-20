/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** comparator_int
*/

#include <my_comparators.h>
#include <stdint.h>

comp_res_t comparator_int32(void *a, void *b)
{
    int32_t *a_int = (int32_t *) a;
    int32_t *b_int = (int32_t *) b;

    if (*a_int == *b_int)
        return COMP_EQUAL;
    if (*a_int < *b_int)
        return COMP_LOWER;
    return COMP_GREATER;
}
