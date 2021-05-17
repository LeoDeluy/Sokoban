/*
** EPITECH PROJECT, 2021
** keep storage
** File description:
** keep the 'O'
*/

#include "../include/my.h"

int *save_o(char *str)
{
    int a = 0;
    int *nbr;
    int b = 0;

    while (str[a] != '\0') {
        if (str[a] == 'O') {
            nbr[b] = a;
            b++;
        }
        a++;
    }
    nbr[b] = -1;
    return (nbr);
}

char *put_o(char *str, int *nbr)
{
    int a = 0;

    while (nbr[a] != -1) {
        if (str[nbr[a]] == ' ') {
            str[nbr[a]] = 'O';
        }
        a++;
    }
    return (str);
}
