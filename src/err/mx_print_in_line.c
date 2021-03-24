#include "pathfinder.h"

void mx_print_in_line(int line, t_pathf *rotes) {
    char *print = mx_itoa(line);

    mx_printerr("error: line ");
    mx_printerr(print);
    mx_printerr(" is not valid\n");
    mx_clean_routes(rotes);
    exit(1); 
}
