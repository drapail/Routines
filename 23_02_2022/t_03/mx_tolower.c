#include <stdio.h>
#include <stdbool.h>
int mx_tolower(int c);

int main()
{
    mx_tolower('B');
    return 1;
}

int mx_tolower(int c)
{
    char charValue = c + '\0';
    if (("%i", charValue) >= 57 && ("%i", charValue) <= 90)
    {
        printf ("%c", charValue + 32);
    }else
    {
        printf ("%c", charValue);
    }
    return 1;
}