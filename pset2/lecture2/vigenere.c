#include<stdio.h>
#include<string.h>
#include<cs50.h>
int main()
{
    // Character string of curtain size
	char text[100];
	int j=0;
	// Taking input for text
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
	
	//this will store encrypted string
	char coded[j];
	coded[j] = '\0';
	
	// Convert the text
	int k = 0;
	
	//this will encrypt the text string
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
	printf("Text = %s",text);
	printf("Coded = %s",coded);	
	return 0;
}
