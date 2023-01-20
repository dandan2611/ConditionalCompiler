/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** my_mem
*/

#pragma once

#include <stddef.h>
#include <stdarg.h>
#include <my_types.h>

void *my_malloc(size_t size);

void *my_calloc(size_t size);

void my_free(void *ptr);

void *my_realloc(void *ptr, size_t new_size);

void *my_memcpy(void *from, void *to, size_t size);

void my_memswap(void *a, void *b, size_t size);

size_t my_memsize(void *ptr);

void *my_memset(void *ptr, char value, size_t size);

void my_free_all(int num, ...);

bool_t my_memcmp(void *ptr1, void *ptr2, size_t size);
