#include "pathfinder.h"

void mx_fl_error(t_pathf *routes) {
    int line = 1;

   for (int i = 0; routes->str_from_f[i] != '\0'; i++) {
        if (line == 1) {
            if (i > 0 && routes->str_from_f[i] == '\n') {
                line++;
                continue;
            }
            if (!mx_isdigit(routes->str_from_f[i]) || !routes->str_from_f[i + 1])
                mx_print_in_line(line, routes);
        }
    }
}


