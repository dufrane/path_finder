#include "pathfinder.h"

int mx_isl_index(char *island, t_pathf *rotes) {
    for (int i = 0; rotes->uniq_isl[i]; i++)
        if (!mx_strcmp(island, rotes->uniq_isl[i]))
            return i;
    return 0;
}
