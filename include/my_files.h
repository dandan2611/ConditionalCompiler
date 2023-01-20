/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** my_files
*/

#pragma once

#include <my_types.h>

bool_t my_file_exists(const char *path);

unsigned long my_file_size(const char *path);

unsigned long my_file_char_count(const char *path);

unsigned long my_file_line_count(const char *path);

char *my_file_read(const char *path);
