/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** my revstr
*/

#include "../../include/my.h"

char *my_revstr(char *str)
{
    int j = 0;
    int t = 0;
    char c;

    while (str[j] != '\0') {
        j = j + 1;
    }
    j = j - 1;
    while (j > t) {
        c = str[t];
        str[t] = str[j];
        str[j] = c;
        t = t + 1;
        j = j - 1;
    }
    return (str);
}
