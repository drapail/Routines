#include <stdio.h> 
#include <stdbool.h> 
void mx_printchar(char character);

int main()
{
    for (int i = 65; i <= 90; i++)
    {
        char asciiLower = i;
        bool flag = i % 2;
        
        if (flag)
        {
            mx_printchar(asciiLower);
        }
        else
        {
            char asciiCapital = i + 32;
            mx_printchar(asciiCapital);
        }
    }
    return 1;
}