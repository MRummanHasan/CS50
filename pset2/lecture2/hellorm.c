#include<cs50.h>
#include<stdio.h>
#include<string.h>
int main(void)
{
string argv;
argv = GetString();
int argc = strlen(argv);

    for (int i=0; i<argc; i++)
    {
        for (int j=0, n=strlen(argv); j<n; j++)
        {        
            printf("%c\n",argv[i]);
        }
    }
    printf("\n");
}
