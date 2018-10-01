#include<cs50.h>
#include<stdio.h>
int main()
{
	int d,n,Coin,cent;
	int amt=GetFloat();
	do
	{
		printf("Give amount in Dollar(s): ");
		GetFloat();
	}
	while(amt<0);
	// Converting to cent
		int cent=amt*100;
	
	// Quarter
		Coin=cent/25;
		cent=cent-(Coin*25);
	// Dime
		d=(cent/10);
		Coin=Coin+d;
		cent=cent-(d*10);
	// Nickel
		n=(cent/5);
		Coin=Coin+n;
		cent=cent-(n*5);	
	// Penny
		Coin=Coin+cent;
		printf("%d",Coin);
}
