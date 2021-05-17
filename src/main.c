/*
** EPITECH PROJECT, 2021
** my sokoban
** File description:
** sokoban
*/

#include "../include/my.h"

char *cpy_file(char **av)
{
    char *str;
    struct stat st;
    int size;
    int fd = open(av[1], O_RDONLY);

    if (fd < 0)
    return (NULL);
    stat(av[1], &st);
    size = st.st_size;
    if (size == 0)
        return (NULL);
    str = malloc(sizeof(char *) * size + 1);
    read(fd, str, size);
    return (str);
}

int game_loop(char *str, int *nbr, int key, char **av)
{
    curs_set(false);
    while (key != '\n') {
        str = min_str(str, key, nbr, av);
        if (win_x(str, nbr) == 0) {
            win_para(str);
            exit (0);
        }
        if (lose(str) == 1) {
            lose_para(str);
            return (1);
        }
        mvprintw(0, 0, str);
        key = getch();
        refresh();
    }
    endwin();
    return (0);
}

int sokoban(int ac, char **av)
{
    int key = 0;
    char *str = cpy_file(av);
    int *nbr = save_o(str);

    initscr();
    noecho();
    keypad(stdscr, TRUE);
    str = cpy_file(av);
    if (game_loop(str, nbr, key, av) == 1)
        endwin();
        return (1);
    endwin();
    return 0;
}

int main(int ac, char **av)
{
    if (ac != 2)
        return (84);
    if (my_h(ac, av) == 1)
        return (0);
    if (error(ac, av) == 84)
        return (84);
    if (sokoban(ac, av) == 1)
        return (1);
}
