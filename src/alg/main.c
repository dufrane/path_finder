#include "pathfinder.h"

int main (int argc, char *argv[]) {
    t_pathf *routes = (t_pathf *)malloc(sizeof(t_pathf));
    t_matrix *matrix = (t_matrix *)malloc(sizeof(t_matrix));

    mx_all_errors(argc, argv, routes);
    mx_init_m(routes, matrix);
    mx_algorithm(routes, matrix);
    mx_res_out(routes, matrix);
    mx_del_strarr(&routes->uniq_isl);
    mx_del_strarr(&routes->islands);
    mx_clean_mx(routes, matrix);
    mx_clean_routes(routes);
    return 0;
}
