#include "pathfinder.h"

void mx_clean_mx(t_pathf *routes, t_matrix *matrix) {
    mx_del_arr((int **)matrix->first, routes);
    mx_del_arr((int **)matrix->table, routes);
    free(matrix);
}
