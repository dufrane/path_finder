#include "pathfinder.h"

void unique_islands(t_pathf *routes);
void double_islands(t_pathf *routes);
void duplicate_bridges(t_pathf *routes);

void mx_print_in_isl(t_pathf *routes); 

void mx_in_of_isl(t_pathf *routes) {
    char *buff = mx_strdup(routes->str_from_f);

    routes->isl_num = mx_atoi(buff);
    if (routes->isl_num < 2)
        mx_print_in_isl(routes);
    for (int i = 0; buff[i] != '\0'; i++)
        if (buff[i] == ',' || buff[i] == '\n' || mx_isdigit(buff[i]))
            buff[i] = '-';
    routes->count_w = mx_count_words(buff, '-');
    routes->uniq_isl = (char **)malloc(sizeof(char *) * routes->count_w);
    routes->islands = mx_strsplit(buff, '-');
    mx_strdel(&buff);
    mx_unique_isl(routes);
    mx_double_isl(routes);
    mx_dup_br(routes);
}

