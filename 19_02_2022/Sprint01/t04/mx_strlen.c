#include <stdio.h>

size_t mx_strlen(const char *s){
    size_t n = 0;
    while(s[n]) ++n;
    return n;
}