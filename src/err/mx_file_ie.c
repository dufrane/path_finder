#include "pathfinder.h"

void mx_file_ie(char *argv[], t_pathf *rotes) {
    char *buff = mx_strnew(1);
    int num_char = read(rotes->descr, buff, 1);

    if (num_char == 0) {
        mx_printerr("error: file ");
        mx_printerr(argv[1]);
        mx_printerr(" is empty\n");
        mx_clean_routes(rotes);
        exit(1);
    }
    mx_strdel(&buff);
    close(rotes->descr);
    rotes->str_from_f = mx_file_to_str(argv[1]);
}

