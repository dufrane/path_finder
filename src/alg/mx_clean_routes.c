#include "pathfinder.h"

void mx_clean_routes(t_pathf *rotes) {
    if (rotes->str_from_f)
        mx_strdel(&rotes->str_from_f); 
    free(rotes); 
}
