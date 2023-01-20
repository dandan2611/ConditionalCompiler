/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** str_concat
*/

#include <my_str.h>
#include <my_const.h>
#include <my_memory.h>

char *str_concat(char *origin, char *append, int source_from,
    int source_to)
{
    int origin_len = str_length(origin);
    int append_len = str_length(append);
    char *new_str = my_calloc(sizeof(char) * (origin_len + append_len + 1));

    if (new_str == MY_NULL)
        return MY_NULL;
    for (int i = 0; i < origin_len; i++)
        new_str[i] = origin[i];
    for (int i = 0; i < append_len; i++)
        new_str[i + origin_len] = append[i];
    return new_str;
}
