#include <stdio.h>
 #include <cs50.h>
 #include <string.h>
 #include <ctype.h>
 int main(void)
 {
 string s = GetString();

 for (int i = 0, n = strlen(s); i < n; i++)
 {
    if ( s[i - 1] == ' ' || i == 0 )
     {
 printf("%c", toupper(s[i]));
 }
 }
 printf("\n");
 }
