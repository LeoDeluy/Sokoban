/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** my_strncat
*/

#include "../../include/my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int w = 0;
    int j = 0;

    while (dest[w] != '\0') {
        w = w + 1;
    }
    while (j < nb && src[j] != '\0') {
        dest[w] = src[j];
        w = w + 1;
        j = j + 1;
    }
    dest[w] = '\0';
    return (dest);
}
