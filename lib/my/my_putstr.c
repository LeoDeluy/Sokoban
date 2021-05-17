/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** my putstr
*/

#include "../../include/my.h"

int my_putstr(char *str)
{
    while (*str != '\0') {
        my_putchar(*str);
        str++;
    }
    return (1);
}
