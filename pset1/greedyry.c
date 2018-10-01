#include<stdio.h>
#include<cs50.h>
main()
{
	int d,n,Coin;
	float amt;
	do
	{
		printf("Give amount in Dollar(s) : ");
		scanf("%f",&amt);
	}
	while(amt<0);
		cout<<"Amount : "<<amt*100<<endl;
	// Converting to cent
		float cent = amt*100;
	
	// Quarter
		Coin=cent/25;
		printf("Coin");
		printf("\n);
		cent=cent-(Coin*25);
		cout<<"Cent = "<<cent<<endl;
		cout<<"Coin = "<<Coin<<endl;
	// Dime
		d=(cent/10);
		cout<<"Cent = "<<cent<<endl;
		Coin=Coin+d;
		cent=cent-(d*10);
		cout<<"Cent = "<<cent<<endl;
		cout<<"Coin = "<<Coin<<endl;
	// Nickel
		n=(cent/5);
		Coin=Coin+n;
		cent=cent-(n*5);
		cout<<"Cent = "<<cent<<endl;
		cout<<"Coin = "<<Coin<<endl;
	// Penny
		Coin=Coin+cent;
		cout<<"Cent = "<<cent<<endl;
		cout<<"Coin = "<<Coin<<endl;
		
		printf("%d",Coin);
}
