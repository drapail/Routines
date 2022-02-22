#include<stdio.h> 
#include<string.h> 
#include<unistd.h> 
#include<fcntl.h> 
void mx_write_knock_knock();

int main(){
    mx_write_knock_knock();
    return 0;
}

void mx_write_knock_knock(){
    write(1, "Follow the white rabbit.$\n", strlen("Follow the white rabbit.$\n")); 
    write(1, "Knock, knock, Neo.$", strlen("Knock, knock, Neo.$")); 
    write(1, "\n", strlen("\n")); 
}