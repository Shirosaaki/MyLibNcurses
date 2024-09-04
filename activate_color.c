/*
** EPITECH PROJECT, 2024
** active and desactive color
** File description:
** active and desactive colro
*/
#include "my.h"

void n_active_color(int n)
{
    attron(COLOR_PAIR(n));
    return;
}

void n_desactive_color(int n)
{
    attroff(COLOR_PAIR(n));
    return;
}
