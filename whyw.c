// Solves your possible problems in life

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Do you have a problem in life?: ");
    int i = 0;
    if (s[i] == 'n' || s[i] == 'N')
    {
        printf("Then why worry?\n\n");
    }
    else if (s[i] == 'y' || s[i] == 'Y')
    {
        string t = get_string("Can you do something about it?: ");
        if (t[i] == 'n' || t[i] == 'N')
        {
            printf("Then why worry?\n\n");
        }
        else if (t[i] == 'y' || t[i] == 'Y')
        {
            printf("Then why worry?\n\n");
        }
    }
}