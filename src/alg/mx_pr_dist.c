#include "pathfinder.h"

void mx_pr_dist(t_pathf *rotes, t_matrix *matrix) {
    int sum = 0;

    mx_printstr("Distance: ");
    for (int i = 1; i < matrix->len; i++){
        mx_printint(matrix->first[matrix->route[i]][matrix->route[i + 1]]);
        sum += matrix->first[matrix->route[i]][matrix->route[i + 1]];
        if (i < matrix->len - 1)
            mx_printstr(" + ");
        else if (i > 1) {
            mx_printstr(" = ");
            mx_printint(sum);
        }
    }
    mx_printstr("\n");
    mx_print_form();
}
