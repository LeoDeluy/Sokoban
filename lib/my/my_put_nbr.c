/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** my put nbr
*/

#include "../../include/my.h"

int my_put_nbr(int nbr)
{
    if (nbr >= 10) {
        my_put_nbr(nbr / 10);
        my_putchar(48 + (nbr % 10));
    }
    else if (nbr < 10)
        my_putchar(48 + nbr);
}
