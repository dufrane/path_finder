#include "pathfinder.h"

void mx_in_of_args(int argc, char *argv[], t_pathf *routes) {
    if (argc != 2) {
        mx_printerr("usage: ./pathfinder [filename]\n");
        exit(1);
    }
    routes->descr = open(argv[1], O_RDONLY);
    routes->str_from_f = NULL;
}
