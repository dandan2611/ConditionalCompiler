/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** str_getline
*/

#include <my_str.h>
#include <my_const.h>

char const *str_getline(char const *str, int line)
{
    int line_number = 0;
    int i = 0;

    if (str == MY_NULL)
        return (MY_NULL);
    while (str[i] != 0) {
        if (str[i] == '\n')
            line_number++;
        if (line_number == line)
            return (str + i + !(line == 0));
        i++;
    }
    return MY_NULL;
}
