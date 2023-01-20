/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** my_free_all
*/

#include <my_memory.h>
#include <stdarg.h>

void my_free_all(int n, ...)
{
    va_list args;

    va_start(args, n);
    for (int i = 0; i < n; i++)
        my_free(va_arg(args, void *));
    va_end(args);
}
