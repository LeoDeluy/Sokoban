/*
** EPITECH PROJECT, 2021
** condition
** File description:
** condition for win and lose
*/

#include "../include/my.h"

int lose(char *str)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    for (int x = 0; str[x] != '\0'; x++)
        if (str[x] == 'X')
            c++;
    while (str[a] != '\0') {
        if (str[a] == 'X')
            b = check_corner(str, a);
        if (b == 1)
            d++;
        if (d == c)
            return (1);
        b = 0;
        a++;
    }
    return (0);
}

int check_corner(char *str, int a)
{
    if (str[a] == 'X' && str[a + 1] == '#' && str[find_m(str, a)] == '#')
        return (1);
    if (str[a] == 'X' && str[a - 1] == '#' && str[find_m(str, a)] == '#')
        return (1);
    if (str[a] == 'X' && str[a + 1] == '#' && str[find_h(str, a)] == '#')
        return (1);
    if (str[a] == 'X' && str[a - 1] == '#' && str[find_h(str, a)] == '#')
        return (1);
    return (0);
}

char *min_str(char *str, int key, int *nbr, char **av)
{
    if (key == ' ') {
        str = cpy_file(av);
        return (str);
    }
    str = key_move(str, key);
    str = put_o(str, nbr);
    return (str);
}

void lose_para(char *str)
{
    clear();
    mvprintw(0, 0, str);
    refresh();
    endwin();
}
