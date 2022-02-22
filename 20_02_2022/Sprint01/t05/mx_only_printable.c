#include <stdio.h>
#include <unistd.h> 
// #include "mx_printchar.c"

int main(){
    for (int i = 126; i <= 126 && i >= 32; i--)
    {
        char asciiValue = i;
        mx_printchar(asciiValue);
    }
    
    }