#include "pathfinder.h"

void mx_init_m(t_pathf *rotes, t_matrix *matrix) {
    int i;
    int j;
    char *buf = mx_strchr(rotes->str_from_f, ',');

    mx_mem_mx(rotes, matrix);
    for (i = 0; i < rotes->isl_num; i++) {
        for (j = 0; j < rotes->isl_num; j++) {
            matrix->table[i][j] = (i != j ? INT_MAX : 0);
        }
    }
    for (int ai = 0 ; (buf = mx_strchr(buf, ',')); ai +=2) {
        i = mx_isl_index(rotes->islands[ai], rotes);
        j = mx_isl_index(rotes->islands[ai + 1], rotes);
        matrix->table[i][j] = mx_atoi(++buf);
        matrix->table[j][i] = matrix->table[i][j];
    }
}

