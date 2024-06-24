/*
** EPITECH PROJECT, 2024
** print messages
** File description:
** print mess
*/

#include "../include/stumper.h"

void print_str(stumper_t *duo, char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (duo->line == NULL) {
            printf("*");
            continue;
        }
    }
    printf("\nTries: %d\n\n", duo->try);
}

int message_error(stumper_t *duo)
{
    for (int i = 0; duo->str[i] != '\0'; i++) {
        if (duo->str[i] == duo->line[0])
            return 0;
    }
    return 1;
}

void print_line(stumper_t *duo)
{
    for (int i = 0; duo->str[i] != '\0'; i++) {
        if (duo->str[i] == duo->line[0]) {
            duo->save_str[i] = duo->str[i];
        }
    }
    printf("%s\n", duo->save_str);
}

int condi_win(stumper_t *duo)
{
    for (int i = 0; duo->save_str[i] != '\0'; i++) {
        if (duo->save_str[i] == '*')
            return 1;
    }
    return 0;
}
