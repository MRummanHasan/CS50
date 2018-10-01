#include<cs50.h>
#include<stdio.h>

int main(void)
{
    printf ("Give me an integer:");
    int n=GetInt();
    
    if (n>0)
    {
    printf ("You put a positive integer\n");
    }
    
    else
    {
    printf("You put a negative integar\n");
    }
}
