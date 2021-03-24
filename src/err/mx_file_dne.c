#include "pathfinder.h"

void mx_file_dne(char *argv[], t_pathf *rotes) {
    if (rotes->descr < 0) {
        mx_printerr("error: file ");
        mx_printerr(argv[1]);
        mx_printerr(" does not exist\n");
        mx_clean_routes(rotes);
        exit(1);
    }
}
