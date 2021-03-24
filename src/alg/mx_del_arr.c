#include "pathfinder.h"

void mx_del_arr(int **arr, t_pathf *routes) {
    if (arr) {
        for (int i = 0; i < routes->isl_num; i++)
            free(arr[i]);
        free(arr);
    }
}
