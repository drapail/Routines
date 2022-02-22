#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(){
    long long int input = 0;
    scanf("%lli", &input);

    if(input > 0)
    {
        mx_printstr("positive");
    }
    else if(input == 0)
    {
        mx_printstr("zero");
    }
    else
    {
        mx_printstr("negative");
    }
    return 1;
}