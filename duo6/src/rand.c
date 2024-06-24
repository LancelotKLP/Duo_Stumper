/*
** EPITECH PROJECT, 2024
** rand.c
** File description:
** rand fct
*/

#include "../include/stumper.h"

char *get_rand_str(char **tab)
{
    int cmp = 0;
    int index = 0;

    for (cmp = 0; tab[cmp] != NULL; cmp++);
    srand(time(NULL));
    index = rand() % (cmp);
    return tab[index];
}
