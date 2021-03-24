#include "libmx.h"

void mx_printstr(const char *s) {
    s == NULL ? write(1, "(null)", 7) : write (1, s, mx_strlen(s));
}
