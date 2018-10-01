#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(void)
{   int key;
        printf("Provide key: ");
        key = GetInt();    
    string mString;
        printf("Provide text: ");
        mString = GetString();
    int n = strlen(mString);
    char c;
    char X;
    //int F = 0;
    //int C;
    
    for (int i=0; i < n; i++)
    {
        c = mString[i];
        X = key % 26;
        /*if (c != ' ')
        {
            X = key % 26;
            printf("\n");
            printf("Character: %i is %c Ascii code is %i its cipher is:%c ascii is %i  -", i+1, mString[i], c, c+X, c+X);
            printf("X= %i is %c : ", X, X);    
         }
         else
         {
            printf(" ");
         }*/
         printf("\nCharacter: %i is %c Ascii code is %i its cipher is:%c ascii is %i  -", i+1, mString[i], c, c+X, c+X);
         printf(" X=%i : ", X);
     // check the range a & z
        if ( c >= 'a' && c <= 'z')
        {
          int C = c + X;
           printf("C=%c is%i", C,C);
           if ( C > 122 )
           {
            int F = C - 26;
            printf(" F=%c is%i", F,F);
           }
           
        }
    }
        printf("\n");
}
