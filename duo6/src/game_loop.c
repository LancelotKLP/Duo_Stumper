/*
** EPITECH PROJECT, 2024
** game loop
** File description:
** game loop
*/

#include "../include/stumper.h"

int lose_win(stumper_t *duo)
{
    if (duo->try == 0) {
        printf("You lost!\n");
        free_prog(duo);
        return 0;
    }
    if (condi_win(duo) == 0) {
        printf("Congratulations!\n");
        free_prog(duo);
        return 0;
    }
    return 1;
}

int game_loop(stumper_t *duo)
{
    while (1) {
        printf("Your letter: ");
        getline(&duo->line, &duo->len, stdin);
        if (message_error(duo) == 1) {
            printf("%c: is not in this word\n", duo->line[0]);
            duo->try--;
        }
        print_line(duo);
        printf("Tries: %d\n\n", duo->try);
        if (lose_win(duo) == 0)
            return 0;
    }
    return 0;
}
