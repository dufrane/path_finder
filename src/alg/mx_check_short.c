#include "pathfinder.h"

bool mx_check_short(t_pathf *rotes, t_matrix *matrix, int k) {
    int i = matrix->route[matrix->len];
    int j = matrix->route[0];

    if (matrix->first[i][k] == matrix->table[i][j] - matrix->table[k][j])
        return true;
    return false;
}
