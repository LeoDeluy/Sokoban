/*
** EPITECH PROJECT, 2021
** key move
** File description:
** key move
*/

#include "../include/my.h"

char *move_up(char *str, int p)
{
    int h = find_h(str, p);
    int hx = find_h(str, h);

    if (hx == -1)
        return (str);
    if (str[h] == '#')
        return (str);
    if (str[h] == 'X') {
        if (str[hx] == '#' || str[hx] == 'X')
            return (str);
        str[p] = ' ';
        str[h] = 'P';
        str[hx] = 'X';
        return (str);
    }
    str[h] = 'P';
    str[p] = ' ';
    return (str);
}

char *move_left(char *str, int p)
{
    if (str[p - 1] == 'X') {
        if (str[p - 2] == '#' || str[p - 2] == 'X')
            return (str);
        str[p] = ' ';
        str[p - 1] = 'P';
        str[p - 2] = 'X';
        return (str);
    }
    if (str[p - 1] == '#')
        return (str);
    str[p] = ' ';
    str[p - 1] = 'P';
    return (str);
}

char *move_right(char *str, int p)
{
    if (str[p + 1] == 'X') {
        if (str[p + 2] == '#' || str[p + 2] == 'X')
            return (str);
        str[p] = ' ';
        str[p + 1] = 'P';
        str[p + 2] = 'X';
        return (str);
    }
    if (str[p + 1] == '#')
        return (str);
    str[p] = ' ';
    str[p + 1] = 'P';
    return (str);
}

char *move_down(char *str, int p)
{
    int m = find_m(str, p);
    int mx = find_m(str, m);

    if (str[m] == '#')
        return (str);
    if (str[m] == 'X') {
        if (str[mx] == '#' || str[mx] == 'X')
            return (str);
        str[p] = ' ';
        str[m] = 'P';
        str[mx] = 'X';
        return (str);
    }
    str[m] = 'P';
    str[p] = ' ';
    return (str);
}

char *key_move(char *str, int key)
{
    int p = find_p(str);

    if (key == KEY_UP)
        str = move_up(str, p);
    if (key == KEY_LEFT)
        str = move_left(str, p);
    if (key == KEY_RIGHT)
        str = move_right(str, p);
    if (key == KEY_DOWN)
        str = move_down(str, p);
    return (str);
}
