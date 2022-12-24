/*
** EPITECH PROJECT, 2022
** ConditionalCompiler
** File description:
** example_disabled
** @conditional[name=enable_stdio, value=0]
*/

#include <unistd.h>

void example_function(void)
{
    write(1, "Hello, the function called is the disabled one!\n", 49);
}
