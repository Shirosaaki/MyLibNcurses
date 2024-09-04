/*
** EPITECH PROJECT, 2024
** init
** File description:
** init
*/
#include "my.h"

void n_init(int color, int cursor)
{
    initscr();
    if (cursor == 0)
        curs_set(0);
    if (color == 1)
        start_color();
    return;
}
