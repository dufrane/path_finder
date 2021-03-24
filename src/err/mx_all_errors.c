#include "pathfinder.h"

void mx_all_errors(int argc, char *argv[], t_pathf *rotes) {
    mx_in_of_args(argc, argv, rotes);
    mx_file_dne(argv, rotes);
    mx_file_ie(argv, rotes);
    mx_fl_error(rotes);
    mx_ol_error(rotes);
    mx_in_of_isl(rotes);
    mx_unique_isl(rotes);
    mx_double_isl(rotes);
    mx_dup_br(rotes);
    mx_length_inc(rotes);
}

