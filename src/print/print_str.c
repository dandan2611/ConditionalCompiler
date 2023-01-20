/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** print_str
*/

#include <my_str.h>
#include <my_print.h>
#include <unistd.h>

int print_str(const char *str)
{
    int len = str_length(str);
    write(1, str, len);
    return len;
}
