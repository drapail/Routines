#include <stdio.h>
#include <unistd.h>
#include <string.h>

void mx_printstr(char phrase[100])
{
    int len = mx_strlen(phrase);

    write(1, phrase, len);
 
}