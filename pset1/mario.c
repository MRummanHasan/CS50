#include<stdio.h>
//#include<cs50.h>

int main()
{
 int n;
 do
    {
    	printf("Height: ");
    	scanf("%d", &n);
    }   
 while(n<0 || n>23);
 
 for(int i=1;i<=n;i++)
    {
        for(int s=i;s<n;s++)
        {
            printf(" ");
        }
        for (int j=i+1;j>0;j--)
        {
            printf("#");
        }
        printf("\n");
    }
}
 
