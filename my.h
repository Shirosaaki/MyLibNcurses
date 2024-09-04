/*
** EPITECH PROJECT, 2024
** mylibncurses
** File description:
** mylibncurses
*/

#ifndef MY_LIB_NCURSES
    #define MY_LIB_NCURSES
    #include <ncurses.h>
    #include <stdlib.h>
    #include <unistd.h>

void n_init(int color, int cursor);
void n_create_color(int n, int color1, int color2);
void n_active_color(int n);
void n_desactive_color(int n);
void n_print_with_color(char *str, int color);
void n_print_with_color_at(char *str, int color, int x, int y);
char *n_getline(char *str, int size);

#endif /* !MY_LIB_NCURSES */
