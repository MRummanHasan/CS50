#include<stdio.h>
#include<cs50.h>
#include<string.h>

void print_fudd_style(string s)
{
    int length = strlem(s);
    for (int i=0; i<length; i++)
        if (s[i] == 'r')
            s[i] =  'w';           
    printf("%s\n", s);
}

int main(void)
{
    string s = GetString();
    while (s != NULL)
    {
        print_fudd_style(s);
        s = GetString();
    }
}
