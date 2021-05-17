/*
** EPITECH PROJECT, 2021
** find
** File description:
** find character
*/

#include "../include/my.h"

int find_h(char *str, int p)
{
    int d = 0;
    int s = p;

    while (str[s] != '\n') {
        if (s == 0)
            return (-1);
        s--;
    }
    d = p - s;
    s--;
    while (str[s] != '\n' && s != 0)
        s--;
    if (s == 0)
        s--;
    d = s + d;
    return (d);
}

int find_m(char *str, int p)
{
    int d = 0;
    int s = p;

    while (str[s] != '\n')
        s--;
    d = p - s;
    s++;
    while (str[s] != '\n')
        s++;
    d = s + d;
    return (d);
}

int find_p(char *str)
{
    int a = 0;

    while (str[a] != 'P')
        a++;
    return (a);
}
