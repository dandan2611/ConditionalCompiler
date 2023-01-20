/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** str_dupl
*/

#include <my_str.h>
#include <my_const.h>
#include<my_memory.h>
#include <stdlib.h>

char *str_dupl(char const *str, int from, int to)
{
    char *dupl = MY_NULL;
    int len = 0;

    if (str == MY_NULL || str[from] == '\0')
        return (MY_NULL);
    to = (to == MY_AUTO) ? str_length(str) : to;
    for (int i = from; str[i] != '\0' && i < to; i++)
        len++;
    dupl = my_malloc(sizeof(char) * (len + 1));
    if (dupl == MY_NULL)
        return (MY_NULL);
    for (int i = 0; i < len; i++)
        dupl[i] = str[from + i];
    dupl[len] = 0;
    return (dupl);
}
