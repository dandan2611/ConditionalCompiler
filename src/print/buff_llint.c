/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** buff_llint
*/

#include <my_print.h>
#include <my_memory.h>
#include <my_maths.h>
#include <limits.h>

static int my_put_nbr_buff(long long nbr, char *buff)
{
    int len = my_nbr_len(nbr);
    long long num;

    if (nbr < 0) {
        *buff++ = '-';
        if (nbr == LLONG_MIN) {
            my_put_nbr_buff(-(nbr / 10), buff);
            buff[18] = '8';
            return 0;
        }
        nbr *= -1;
    }
    for (int i = len - 1; i >= 0; i--) {
        num = nbr / my_lpow(10, i);
        num %= 10;
        buff[len - i - 1] = '0' + num;
    }
    return 0;
}

char *buff_llint(long long int nb)
{
    char *buff = my_calloc(sizeof(char) * (my_nbr_len(nb) + 1));

    my_put_nbr_buff(nb, buff);
    return buff;
}
