#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	string text;
	
	printf("ENTER THE TEXT :\n");
	text = GetString();
	int n = strlen(text);
	string coded[n-1];
	
	int k = 0;
	printf("\nCODED TEXT:");
	printf("\nTest 1");
	for(int i = 0; i < n ; i++)
	{	
	    	printf("Test 2");    
		if ( (text[i] >= 65 && text[i] <= 90) || (text[i] >= 97 && text[i] <= 122) )
		{
			printf("Test 1");
			if( k == 0 )
			{
				if (text[i] >= 65 && text[i] <= 90)
					*coded[i] = ((1 + (text[i] - 65)) % 26) + 65;
				else
					*coded[i] = ((1 + (text[i] - 97)) % 26) + 97;
				k = 1;
			}
			else if( k == 1)
			{
				*coded[i] = text[i];
				k = 2;
			}
			else
			{
				if (text[i] >= 65 && text[i] <= 90)
					*coded[i] = ((25 + (text[i] - 65)) % 26) + 65;
				else
					*coded[i] = ((25 + (text[i] - 97)) % 26) + 97;
				k = 0;
			}
		}
		else
			*coded[i] = text[i];
		printf("%c", *coded[i]);
	}
	return 0;
}
