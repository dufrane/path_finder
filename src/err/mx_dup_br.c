#include "pathfinder.h"

void mx_dup_br(t_pathf *routes) {
    for (int i = 0; i < routes->count_w; i +=2) { 
        for (int j = i + 2; j < routes->count_w; j +=2) {
            if (!mx_strcmp(routes->islands[i], routes->islands[j])
                || !mx_strcmp(routes->islands[i], routes->islands[j + 1])) {
                if (!mx_strcmp(routes->islands[i + 1], routes->islands[j + 1])
                    || !mx_strcmp(routes->islands[i + 1], routes->islands[j])) {
                    mx_printerr("error: duplicate bridges\n");
                    mx_del_strarr(&routes->islands);
                    exit(1);
                }
            }
        }
    }
}
