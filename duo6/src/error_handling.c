/*
** EPITECH PROJECT, 2024
** error_handling
** File description:
** check the validity of the command
*/

#include "../include/stumper.h"

int error_handling(int ac, char **av)
{
    if (ac < 2 || ac > 3)
        return 84;
    if (av[2] != NULL && atoi(av[2]) <= 0)
        return 84;
    return 0;
}

int file_handling_bis(char **args, int i)
{
    for (int j = 0; args[i][j] != '\0'; j++) {
        if (args[i][j] == ' ')
            return 84;
    }
    return 0;
}

int file_handling(char **args)
{
    for (int i = 0; args[i] != NULL; i++) {
        if (file_handling_bis(args, i) == 84)
            return 84;
    }
    return 0;
}
