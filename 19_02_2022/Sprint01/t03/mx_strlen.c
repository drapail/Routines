#include<stdio.h> 
size_t mx_strlen(const char *s);

int main(){
    char x[20] = "Hellothere";
    size_t k = mx_strlen(x);
    printf("%li", k);
    return 0;
}

size_t mx_strlen(const char *s)
{
    size_t n = 0;
    while(s[n]) ++n;
    return n;
}