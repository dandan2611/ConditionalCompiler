/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** str_line_length
*/

#include <my_str.h>
#include <my_const.h>
#include <limits.h>

int str_line_length(const char *str)
{
    int i = 0;
    if (!str)
        return MY_UNDEFINED;
    while (str[i] != '\0' && str[i] != '\n') {
        if (i == INT_MAX)
            return MY_OVERFLOW;
        i++;
    }
    return i;
}
