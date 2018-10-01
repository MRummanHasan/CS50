#include<cs50.h>
#include<stdio.h>
#include<string.h>
int main(int argc, string argv[])
{
    for (int i=0; i<argc; i++)
    {
        for (int j=0, n=strlen(argv[i]); j<n; j++)
        {
        printf("%c\n", argv[i][j]);
        //int atoi(const char argv[i]);
                //printf("%s\n", argv[i]);
            //char c = argv[i];
            //X = argv[i];
        //int X = atoi(argv[i]);
            //printf("%i", X);
        }
    }
    printf("\n");
}
