/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** print_str
*/

#include <my_str.h>
#include <my_print.h>
#include <unistd.h>

int print_strln(const char *str)
{
    int len = str_length(str);
    write(1, str, len);
    write(1, "\n", 1);
    return len + 1;
}
