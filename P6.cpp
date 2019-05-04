#include<iostream>

using namespace std;

int main()
{
	int xnum = 0, ynum = 1, sum=0;
	cout << xnum << "," << ynum <<",";
	for(int i=1; i<=20; i++)
	{
		sum=xnum+ynum;
		if(i==20)
		{
			cout << sum;
			return 0;
		}
		cout << sum << ",";
		xnum = ynum;
		ynum = sum;	
	}
}

