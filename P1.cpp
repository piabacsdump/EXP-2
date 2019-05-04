#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	double hours, total, limit;
	char package;
	
	cout << "What package are you taking A, B, or C? : ";
	package = cin.take();
	
	if(package == 'A' || package == 'B' || package == 'C')
	{
	
	cout << "\nHow many hours were consumed: ";
	cin >> hours;
	
	if(hours < 0)
	{
		cout << "Hours should not be less than 0. Voiding program...";
		for(int i=0; i<=80; i++)
		{
	  		for(long int j=0; j<16000000; j++)
	  		{ }
	  	}
	  	return 0;
	}
	
	if(package == 'A')
	{
	limit = 995;
	if(hours < 10)
	{   
	total = limit;
	}
	else
	total = ((hours - 10) * 20) + limit;
	
	cout << "The amount should be : P " << total << "\n\n";
	}
	
	if(package == 'B')
	{
	limit = 1495;
	if(hours < 20)
	total = limit;
	else
	total = ((hours - 20) * 10) + limit;
	
	cout << "The amount should be : P " << total << "\n\n";
	}
	
	if(package == 'C')
	{
	limit = 1995;
	total = limit;
	cout << "The amount should be : P " << total << "\n\n";
	}
	}
	else
	{
		cout << "Does not exist package. Voiding program...";
		for(int i=0; i<=80; i++)
		{
	  		for(long int j=0; j<16000000; j++)
	  		{ }
	  	}
	}
	return 0;
}

