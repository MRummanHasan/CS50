#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get key
    printf("Provide key: ");
    int key = GetInt();    
    // Get plain text
    printf("Provide text: ");
    string text = GetString();
    
    int n = strlen(text);
    char c;
    char X;
    int C;
    X = key % 26;
    for (int i=0; i < n; i++)
    {
      // c = single alphabet of text in array[i]
        c = text[i];

        if (( c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z'))
        C = c + X;
        else
        C = c;
        
      // Check the range of alphabet 'a' to 'z'
        if (( c >= 'a' && c <= 'z' && C > 122) || ( c >= 'A' && c <= 'Z' && C > 90))
        {
            C = C - 26;
        }
       printf("%c",C);
    }
    printf("\n");
}
