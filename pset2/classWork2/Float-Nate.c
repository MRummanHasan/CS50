#include<stdio.h>
#include<cs50.h>

float  sum(float a,float b)
{
    return a+b;
}
int main(void)
{
    float x = 7.123;
    float y = 3.4159;
    
    printf("%f + %f = %f\n", x, y,sum(x, y));
    
    return 0;
}

