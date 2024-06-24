/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/

#include "include/stumper.h"

void free_prog(stumper_t *duo)
{
    for (int i = 0; duo->tab[i] != NULL; i++)
        free(duo->tab[i]);
    free(duo->tab);
    free(duo->save_str);
    free(duo->line);
    free(duo);
}

int main(int ac, char **av)
{
    stumper_t *duo;

    if (error_handling(ac, av) == 84)
        return 84;
    duo = malloc(sizeof(stumper_t));
    init_struct(duo, ac, av);
    if (duo->tab == NULL) {
        free(duo);
        return 84;
    }
    if (duo->str[0] == '\0' || file_handling(duo->tab) == 84) {
        free_prog(duo);
        return 84;
    }
    print_str(duo, duo->str);
    return (game_loop(duo));
}
