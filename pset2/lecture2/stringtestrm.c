//#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main()
{
	string s = GetString();
	string str ="M Rayyan Hasan Khan";
	string str2;

	for(int i=0;i<strlen(s);i++)
	{
		int a = str[i];
		
		if(str[i-1] == ' ' || i == 0)
			if(a>=97 && a<=122)
				str2.append(1, a - 32);
			else
				str2.append(1, a);
	}
	printf("%s",str.c_str());
	printf("\n");
	printf("%s",str2.c_str());
	return 0;
}
