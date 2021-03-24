#include "pathfinder.h"

void mx_algorithm(t_pathf *rotes, t_matrix *matrix) {
    long sum;
    int i;

    for (i = 0; i < rotes->isl_num; i++) { 
        for (int j = i; j < rotes->isl_num; j++) {
            matrix->first[i][j] = matrix->table[i][j];
            matrix->first[j][i] = matrix->table[j][i];
        }
    }
    for (int k = 0; k < rotes->isl_num; k++) {
        for (i = 0; i < rotes->isl_num; i++) {
            for (int j = i + 1; j < rotes->isl_num; j++) {
                sum = matrix->table[k][j] + matrix->table[i][k];
                if (matrix->table[i][j] > sum) {
                    matrix->table[i][j] = sum;
                    matrix->table[j][i] = sum;
                }
            }
        }
    }
}
