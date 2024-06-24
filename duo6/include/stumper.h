/*
** EPITECH PROJECT, 2023
** include
** File description:
** .h
*/

#ifndef ORGINIZED_H
    #define ORGINIZED_H

    #include <stddef.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <unistd.h>
    #include <time.h>

typedef struct stumper_s {
    char **tab;
    char *str;
    char *line;
    int try;
    size_t len;
    char *save_str;
}stumper_t;

void init_struct(stumper_t *duo, int ac, char **av);
int error_handling(int ac, char **av);
char **my_str_to_word_array_condition(char *str, char *condition);
char **get_tab(char *str);
int condi_win(stumper_t *duo);
void print_line(stumper_t *duo);
int message_error(stumper_t *duo);
void print_str(stumper_t *duo, char *str);
char *get_rand_str(char **tab);
int game_loop(stumper_t *duo);
void free_prog(stumper_t *duo);
int file_handling(char **);

#endif
