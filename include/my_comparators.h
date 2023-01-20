/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** my_comparators
*/

#pragma once

#include <stdint.h>

typedef char comp_res_t;

#define COMP_EQUAL 0
#define COMP_LOWER -1
#define COMP_GREATER 1

comp_res_t comparator_int32(void *a, void *b);
comp_res_t comparator_int64(void *a, void *b);
comp_res_t comparator_uint64(void *a, void *b);
comp_res_t comparator_uint32(void *a, void *b);
