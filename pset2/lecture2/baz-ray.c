#include<stdio.h>
#include<string.h>
#include<cs50.h>
int main()
{
    // String of some size
	char text[10];

    //take input for text string
	int j=0;
	while(text[j-1] != '\n')
    {
    	if( text[j-1] == '\b')
    	{
    		text[j-1] = '\0';
    		j = j-2;
    	}
        text[j] = getchar();
        j++;
    }
    text[j] = '\0';
    
	
	char coded[j];
	coded[j] = '\0';

	int k = 0;
	for(int i = 0 ; i < j ; i++)
	{
		if ( (text[i] >= 65 && text[i] <= 90) || (text[i] >= 97 && text[i] <= 122) )
		{
			if( k == 0 )
			{
				if (text[i] >= 65 && text[i] <= 90)
					coded[i] = ((1 + (text[i] - 65)) % 26) + 65;
				else
					coded[i] = ((1 + (text[i] - 97)) % 26) + 97;
				k = 1;
			}
			else if( k == 1)
			{
				coded[i] = text[i];
				k = 2;
			}
			else
			{
				if (text[i] >= 65 && text[i] <= 90)
					coded[i] = ((25 + (text[i] - 65)) % 26) + 65;
				else
					coded[i] = ((25 + (text[i] - 97)) % 26) + 97;
				k = 0;
			}
		}
		else
			coded[i] = text[i];
	}
	printf("\nText = %s\n",text);
	printf("\nCoded = %s\n",coded);	
	return 0;
}
