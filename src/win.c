/*
** EPITECH PROJECT, 2021
** win
** File description:
** the win
*/

#include "../include/my.h"

int win_x(char *str, int *nbr)
{
    int a = 0;

    while (nbr[a] != -1) {
        if (str[nbr[a]] != 'X') {
            return (1);
        }
        a++;
    }
    return (0);
}

void win_para(char *str)
{
    clear();
    mvprintw(0, 0, str);
    refresh();
    usleep(500000);
    endwin();
}
