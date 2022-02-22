#include<stdio.h> 
#include<unistd.h> 

void mx_printchar(char character) { 
    // char character;
    write(1, &character, 1); 
    write(1, "\n", 1);
}