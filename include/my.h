/*
** EPITECH PROJECT, 2020
** my
** File description:
** contains the prototypes of all the functions exposed in my libmy.a
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ncurses.h>

char *cpy_file(char **av);
int find_h(char *str, int p);
int find_m(char *str, int p);
char *move_up(char *str, int p);
char *move_left(char *str, int p);
char *move_right(char *str, int p);
char *move_down(char *str, int p);
int find_p(char *str);
char *key_move(char *str, int key);
int *save_o(char *str);
char *put_o(char *str, int *nbr);
int win_x(char *str, int *nbr);
void win_para(char *str);
int my_h(int ac, char **av);
int only_c(char **av);
int lose(char *str);
void lose_para(char *str);
int check_corner (char *str, int a);
int sokoban(int ac, char **av);
char *min_str(char *str, int key, int *nbr, char **av);
int game_loop(char *str, int *nbr, int key, char **av);
int error(int ac, char **av);
int main(int ac, char **av);

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
