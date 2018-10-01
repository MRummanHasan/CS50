#include<stdio.h>
#include<math.h>
#include<cs50.h>

int main()
{
	int d,n,Coin;
	float amt;
	do
	{
		printf("Give amount in Dollar(s) : ");
		amt = GetFloat();
	}
	while(amt<0);
		
	// Converting to cent
	    float centf = amt*100;
	    centf = roundf(centf*100)/100;
	int cent = centf;
	
	// Quarter
		Coin=cent/25;
		cent=cent%25;
	// Dime
		d=(cent/10);
		Coin=Coin+d;
		cent=cent%10;
	// Nickel
		n=(cent/5);
		Coin=Coin+n;
		cent=cent%5;	
	// Penny
		Coin=Coin+cent;
		printf("\nTotal Coins = %d\n",Coin);
}
