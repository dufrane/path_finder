#include "pathfinder.h"

static int nextl_error(t_pathf *rotes, char *str, int *line, int i);

void mx_ol_error(t_pathf *rotes) {
    int line = 1;

    for (int i = 0; rotes->str_from_f[i] != '\0'; i++) {
        if (line == 1) {
            if (i > 0 && rotes->str_from_f[i] == '\n') {
                line++;
                continue;
            }
            if (!mx_isdigit(rotes->str_from_f[i]) || !rotes->str_from_f[i + 1])
                mx_print_in_line(line, rotes);
        }
        if (line > 1) {
            i = nextl_error(rotes, rotes->str_from_f, &line, i);
        }
    }
}

static int nextl_error(t_pathf *rotes, char *str, int *line, int i) {
    if (str[i] == '\n' && str[i + 1] == '\0')
        return ++i;
    for ( ; str[i] != '-'; i++)
        if (!mx_isalpha(str[i]))
            mx_print_in_line(*line, rotes);
    if (str[i] == '-' && (!mx_isalpha(str[i - 1]) || !mx_isalpha(str[i + 1])))
        mx_print_in_line(*line, rotes);
    for (i++ ; str[i++ + 1] != ','; )
        if (!mx_isalpha(str[i]))
            mx_print_in_line(*line, rotes);
    if (str[i] == ',' && (!mx_isalpha(str[i - 1]) || !mx_isdigit(str[i + 1])))
        mx_print_in_line(*line, rotes);
    for (i++ ; str[i] != '\n'; i++)
        if (!mx_isdigit(str[i]) || (INT_MAX < mx_atol(&(str[i])))) 
            mx_print_in_line(*line, rotes);
    if (str[i] != '\n')
        mx_print_in_line(*line, rotes);
    (*line)++;
    return i;
}
