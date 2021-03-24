#include "pathfinder.h"


void mx_pr_path(t_pathf *rotes, t_matrix *matrix) {
    mx_print_form();
    mx_printstr("Path: ");
    mx_printstr(rotes->uniq_isl[matrix->route[1]]);
    mx_printstr(" -> ");
    mx_printstr(rotes->uniq_isl[matrix->route[matrix->len]]);
    mx_printstr("\n");
    mx_printstr("Route: ");
    for (int i = 1; i < matrix->len + 1; ) {
        mx_printstr(rotes->uniq_isl[matrix->route[i]]);
        ++i < matrix->len + 1 ? mx_printstr(" -> ") : mx_printstr("");
    }
    mx_printstr("\n");
}

