#include "pathfinder.h"

void mx_mem_mx(t_pathf *rotes, t_matrix *matrix) {
    matrix->table = (long **)malloc(sizeof(long *) * rotes->isl_num);
    matrix->first = (long **)malloc(sizeof(long *) * rotes->isl_num);
    for (int i = 0; i < rotes->isl_num; i++) {
        matrix->table[i] = (long *)malloc(sizeof(long) * rotes->isl_num);
        matrix->first[i] = (long *)malloc(sizeof(long) * rotes->isl_num);
    }
}

