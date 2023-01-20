/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** str_copy
*/

#include <my_str.h>
#include <my_const.h>

char *str_copy(char *source, char *destination, int from, int to)
{
    int len = str_length(source);
    int i = 0;

    if (to == MY_AUTO)
        to = len;
    if (to > len)
        to = len;
    if (from < 0)
        from = 0;
    if (from > to)
        return MY_NULL;
    for (i = from; i < to; i++)
        destination[i] = source[i];
    destination[i] = '\0';
    return destination;
}
