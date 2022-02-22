#include <stdio.h>
#include <stdbool.h>
bool mx_isdigit(int c);

int main()
{
    if (mx_isdigit(5) == 1){
        printf("is_digit");
    }else
    {
        printf("Not a digit");
    }
    return 1;
}

bool mx_isdigit(int c)
{
    char charValue = c + '0';
    if (("%i", charValue) <= 57 && ("%i", charValue) >= 48)
    {
        return 1;
    }else
    {
        return 0;
    }
}