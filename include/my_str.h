/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** my_str
*/

#pragma once

#include <my_types.h>

bool_t char_is_alpha(char c);

bool_t char_is_uppercase(char c);

bool_t char_is_lowercase(char c);

bool_t char_is_num(char c);

bool_t char_is_alphanum(char c);

bool_t char_is_printable(char c);

char char_uppercase(char c);

char char_uppercase_ptr(char *c);

char char_lowercase(char c);

char char_lowercase_ptr(char *c);

/**
 * Retrieve the length of a string.
*/
int str_length(const char *str);

/**
 * Duplicate a string.
 * This method is allocating memory. So freeing it is mandatory.
 * The string length can automatically be calculated if the to parameter is
 * set to MY_AUTO.
 *
 * Returns NULL if the string is NULL.
 * Returns NULL if the memory allocation failed.
 * Returns the duplicated string otherwise.
*/
char *str_dupl(const char *str, int from, int to);

/**
 * Copy a string into another.
 * This method is allocating memory. So freeing it is mandatory.
 * The destination field MUST be correctly allocated.
 * The string length can automatically be calculated if the to parameter is
 * set to MY_AUTO.
 *
 * Returns the destination string.
*/
char *str_copy(char *source, char *destination, int from, int to);

/**
 * Edit the string and sets the characters from str[from] to str[to] to
 * uppercase if they are alphabetical.
 * The string length can automatically be calculated if the to parameter is
 * set to MY_AUTO.
*/
char *str_uppercase(char *str, int from, int to);

/**
 * Edit the string and sets the characters from str[from] to str[to] to
 * lowercase if they are alphabetical.
 * The string length can automatically be calculated if the to parameter is
 * set to MY_AUTO.
*/
char *str_lowercase(char *str, int from, int to);

bool_t str_is_uppercase(char *str, int from, int to);

bool_t str_is_lowercase(char *str, int from, int to);

bool_t str_is_alphabet(char *str, int from, int to);

bool_t str_is_num(char *str, int from, int to);

bool_t str_has_unprintable_char(char *str, int from, int to);

char *str_concat(char *origin, char *append, int source_from, \
    int source_to);

bool_t str_contains(char *str, char *to_find, int from, int to);

char *str_reverse(char *str, int from, int to);

/**
 * Get the number of lines of a given string.
 * The count automatically start from one. We assume that a string without any
 * '\n' character has one line per default.
 * A string of memory size 1 with a \0 as the first character or even a null
 * string WILL have a 0 line count.
*/
int str_lines(char const *str);

char const *str_getline(char const *str, int line);

int str_line_length(char const *str);
