#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
    string mString;
    mString = GetString();
    int n = strlen(mString);
    int cipher = 1;
    for(int i=0; i< n; i++)
    {
        char c = mString[i];
       /*int atoi(const char *mString);
       int z;
       z = atoi(mString);
       printf("%c\n", atoi(mString));*/
        int X = c+cipher;
      //PRINT CONVERTED CORRECTOR Z to {
        printf("%c \n", X );
//printf("Character: %i is (%c) Ascii code is %i its cipher is " ,i + 1, mString[i], X); 
        X = (c+cipher)%26;
        printf("X is %c\n", X);
    }
    //printf("hello, %s %i\n", mString, n);
}
