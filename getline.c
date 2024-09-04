/*
** EPITECH PROJECT, 2024
** getline
** File description:
** getline
*/
#include "my.h"

char *n_getline(char *str, int size)
{
    if (size != 0)
        str = malloc(sizeof(char) * size);
    getstr(str);
    return str;
}
