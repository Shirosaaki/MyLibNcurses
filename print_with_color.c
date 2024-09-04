/*
** EPITECH PROJECT, 2024
** print with color
** File description:
** pritn with color
*/
#include "my.h"

void n_print_with_color(char *str, int color)
{
    n_active_color(color);
    printw("%s", str);
    n_desactive_color(color);
    return;
}

void n_print_with_color_at(char *str, int color, int x, int y)
{
    n_active_color(color);
    mvprintw(y, x, "%s", str);
    n_desactive_color(color);
    return;
}
