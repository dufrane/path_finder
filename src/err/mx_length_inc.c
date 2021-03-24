#include "pathfinder.h"

void mx_length_inc(t_pathf *routes) {
    char *buff = mx_strchr(routes->str_from_f, ',');

    for (unsigned len = 0; buff; buff = mx_strchr(buff, ',')) {
        len += mx_atoi(++buff);
        if (len > INT_MAX) {
            mx_printerr("error: sum of bridges lengths is too big\n");
            mx_del_strarr(&routes->uniq_isl);
            mx_del_strarr(&routes->islands);
            mx_clean_routes(routes);
            exit(1);
        }
    }
}
