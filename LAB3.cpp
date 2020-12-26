//lab3
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter 1st Number=";
	cin>>a;
	cout<<"\nEnter 2st Number=";
	cin>>b;
	
	if(a>b)
	{
	cout<<"1st Number is greater";
	}
	else if(a<b)
	{
	cout<<"2st Number is greater";
	}
	else
	{
	cout<<"Both Numbers are equal";
	}
	
	return 0;
}
