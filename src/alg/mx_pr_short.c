#include "pathfinder.h"

void mx_pr_short(t_pathf *rotes, t_matrix *matrix) {
    for (int k = 0; k < rotes->isl_num; k++) {
        if (k != matrix->route[matrix->len]
            && mx_check_short(rotes, matrix, k)) {
            matrix->route[++matrix->len] = k;
            mx_pr_short(rotes, matrix);
            matrix->len--;
        }
    }
    if (matrix->route[matrix->len] != matrix->route[0])
        return;
    mx_pr_path(rotes, matrix);
    mx_pr_dist(rotes, matrix);
}
