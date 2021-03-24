#include "pathfinder.h"

void mx_double_isl(t_pathf *routes) {
    int line = 2;

    for (int i = 1; i < routes->count_w; i +=2) {  
        if (!mx_strcmp(routes->islands[i], routes->islands[i - 1])) { 
            mx_del_strarr(&routes->islands); 
            mx_del_strarr(&routes->uniq_isl); 
            mx_print_in_line(line, routes); 
        }
        line++;
    }
}
