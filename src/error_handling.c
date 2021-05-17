/*
** EPITECH PROJECT, 2021
** error handling
** File description:
** error handling
*/

#include "../include/my.h"

int only_c(char **av)
{
    int a = 0;
    char *str = cpy_file(av);

    if (str == NULL)
        return (84);
    while (str[a] != '\0') {
        if (str[a] != ' ' && str[a] != '\n' && str[a] != '#' &&
            str[a] != 'X' && str[a] != 'O' && str[a] != 'P') {
            return (0);
            a++;
        }
        a++;
    }
    return (1);
}

int error(int ac, char **av)
{
    if (only_c(av) != 1) {
        endwin();
        return (84);
    }
    if (cpy_file(av) == NULL)
        return (84);
    return (0);
}

int my_h(int ac, char **av)
{
    if (av[1][0] == '-' && av[1][1] == 'h') {
        my_putstr("USAGE\n\n   ./my_sokoban map\n\nDESCRIPTION\n\n     map ");
        my_putstr("file representing the warehouse map, containing '#'");
        my_putstr(" for walls, \n      'P' for the player, 'X' ");
        my_putstr("for boxes and 'O' for storage locations.\n");
        my_putstr("\n     Use arrow keys to move the player\n\n");
        return (1);
    }
    return (0);
}
