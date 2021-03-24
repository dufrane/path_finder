#include "pathfinder.h"

void pr_dist(t_pathf *rotes, t_matrix *matrix);

void mx_res_out(t_pathf *rotes, t_matrix *matrix) {
    for (int i = 0; i < rotes->isl_num; i++) {
        for (int j = i + 1; j < rotes->isl_num; j++) {
            matrix->route = (int *)malloc(sizeof(int) * (rotes->isl_num));
            matrix->len = 1;
            matrix->route[0] = j;
            matrix->route[matrix->len] = i;
            mx_pr_short(rotes, matrix);
            free(matrix->route);
        }
    }
}







