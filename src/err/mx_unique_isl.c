#include "pathfinder.h"

void mx_print_in_isl(t_pathf *routes); 

void mx_unique_isl(t_pathf *routes) {
    int num = 1;

    if (routes->islands[0] == NULL)
        mx_print_in_isl(routes);
    routes->uniq_isl[0] = mx_strdup(routes->islands[0]);
    for (int i = 1; i < routes->count_w; i++) {
        for (int j = 0; j < num; ) {
            if (!mx_strcmp(routes->uniq_isl[j], routes->islands[i]))
                break;
            if (++j == num)
                routes->uniq_isl[num++] = mx_strdup(routes->islands[i]);
        }
    }
    if (routes->isl_num != num) {
        mx_del_strarr(&routes->uniq_isl);
        mx_print_in_isl(routes);
    }
}


