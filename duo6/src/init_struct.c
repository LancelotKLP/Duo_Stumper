/*
** EPITECH PROJECT, 2024
** init_strcut
** File description:
** init_strut
*/

#include "../include/stumper.h"

void init_struct(stumper_t *duo, int ac, char **av)
{
    int i;

    duo->tab = get_tab(av[1]);
    if (duo->tab == NULL)
        return;
    duo->str = get_rand_str(duo->tab);
    duo->line = NULL;
    duo->try = 10;
    if (av[2] != NULL) {
        duo->try = atoi(av[2]);
    }
    duo->save_str = malloc(sizeof(char) * (strlen(duo->str) + 1));
    for (i = 0; duo->str[i] != '\0'; i++) {
        duo->save_str[i] = '*';
    }
    duo->save_str[i] = '\0';
}
