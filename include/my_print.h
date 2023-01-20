/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** my_print
*/

#pragma once

int print_char(char c);

int print_str(const char *str);

int print_strln(const char *str);

int print_str_err(const char *str);

int print_llint(long long int nb);

int print_base(int nb, const char *base);

int print_f(const char *format, ...);

char *buff_llint(long long int nb);
