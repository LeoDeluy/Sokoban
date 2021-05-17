/*
** EPITECH PROJECT, 2020
** my_strncpy
** File description:
** my_strncpy
*/

#include "../../include/my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int j = 0;

    while (src[j] != '\0' && j < n) {
        dest[j] = src[j];
        j = j + 1;
    }
    while (j < n) {
        dest[j] = '\0';
        j = j + 1;
    }
    return (dest);
}
