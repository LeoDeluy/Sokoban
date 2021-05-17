/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** my_strcat
*/

#include "../../include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int w = 0;
    int j = 0;

    while (dest[w] != '\0') {
        w = w + 1;
    }
    while (src[j] != '\0') {
        dest[w] = src[j];
        j = j + 1;
        w = w + 1;
    }
    dest[w] = '\0';
    return (dest);
}