/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** print_str_err
*/

#include <my_print.h>
#include <my_str.h>
#include <unistd.h>

int print_str_err(const char *str)
{
    int length = str_length(str);
    return write(2, str, length);
}
