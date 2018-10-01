#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
    string s = GetString();

    for (int i = 0, n=strlen(s); i<n; i++)
    {
        if( s[i] == ' ' || i == 0)
            if( s[i-1] >= 'a' && s[i] <= 'A')
                printf("%c\n", s[i]);
             {
                printf("%c", s[i]-('a' - 'A'));
             }
    }
        printf("\n");
}
