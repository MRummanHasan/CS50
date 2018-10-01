#include<stdio.h>
#include<cs50.h>
int main()
{
    char astring[10];
    //string astring = GetString();
    int i =0;
    scanf("%s", astring);
    for( i = 0; i <5; ++i)
    {
        if ( astring[i] == 'a' )
        {
            printf( "You entered an a! \n");
        }
    }
}
