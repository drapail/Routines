#include <stdio.h>
#include <unistd.h>
#include <string.h>
// #include "mx_strlen.c"
size_t mx_strlen(const char *s);

int main(){
    char phrase[100];
    scanf("%s", phrase);
    
    int len = mx_strlen(phrase);
    // printf("%i", len);

    
    write(1, &phrase, len);
    return 0;
}