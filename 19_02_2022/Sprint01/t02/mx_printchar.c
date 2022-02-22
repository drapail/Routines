#include<stdio.h> 
#include<unistd.h> 
void mx_printchar(char character);

int main(){
    char character;
    scanf("%c", &character);
    mx_printchar(character);
    return 0;
}

void mx_printchar(char character) { 
        write(1, &character, 1); 
        write(1, "\n", 1); 
}