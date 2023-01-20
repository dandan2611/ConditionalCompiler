/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** str_lines
*/

#include <my_str.h>
#include <my_const.h>

int str_lines(char const *str)
{
    int lines = 1;

    if (str == MY_NULL || str[0] == 0)
        return (0);
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == '\n')
            lines++;
    return (lines);
}
