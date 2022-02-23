#include <stdio.h>
#include <stdbool.h>
bool mx_isdigit(int c);

int main()
{
    if (mx_isdigit('k') == 1){
        printf("is_space");
    }else
    {
        printf("not_space");
    }
    return 1;
}

bool mx_isdigit(int c)
{
    char charValue = c + '\0';
    if (("%i", charValue) == 32)
    {
        return 1;
    }else
    {
        return 0;
    }
}