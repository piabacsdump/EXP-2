#include<iostream>

using namespace std;

int main()
{
	for(int p=1; p<=30;)
	{
		if(p<10){
			cout << p << ",";
			p++;
		}
		else if(p>=10 && p <= 30){
			if(p==30){
				cout << p;
				return 0;
			}
			cout << p << ",";
			p+=2;
		}
	}
}

