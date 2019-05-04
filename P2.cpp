#include<iostream>

using namespace std;

int main()
{
	int gal;
	cout << "Please enter how much gallons of water have been used as what is seen on the meter reading: ";
	do{
		cin >> gal;
		if (gal<0){
			cout << "You have entered an amount that is not existing, please do it again: ";
		}
	}while(gal<0);
	double demandCharge = 35, consumptionCharge = 1.10, pay;
	double totalCost = demandCharge+(gal*consumptionCharge);
	//if payment is not paid on due date
	double totalCostLate = totalCost + 20;
	cout << "Please input exact amount paid:   P ";
	do{
		cin >> pay;
		if (pay < 0)
			cout << " You have entered an amount that is not existing, please do it again:  P ";
	}while(pay < 0);
	//conditions
	if(pay<totalCost){
		cout << "Here is your total bill costs P " << totalCost << " with a late charge fee of P20.\n";
		cout << "Please put the correct amount:  P ";
		cin >> pay;
		if( pay < 0)
		{
			cout << "Payment input does not exist. Voiding program...";
			for(int i=0; i<=80; i++)
			{
		  		for(long int j=0; j<16000000; j++)
		  		{ }
		  	}
		  	return 0;
		}
		else if(pay < totalCostLate){
			cout << "Payment input is not enough. Voiding program...";
			for(int i=0; i<=80; i++)
			{
		  		for(long int j=0; j<16000000; j++)
		  		{ }
		  	}
		  	return 0;
		}
		else
			cout << "Payment input is successful. Your change is P " << pay - totalCostLate;
	}
	else
		cout << "Payment input is successful. The cost of your bill is P " << totalCost << ". Your total change is P " << pay - totalCost << ".";
	return 0; 
}

