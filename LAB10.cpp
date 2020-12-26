//Lab10
#include<iostream>
using namespace std;
int main()
{
	int d,m,h,c;
	cout<<"Converter";
	cout<<"\n1:Days ---> Hours";
	cout<<"\n2:Days ---> Minutes";
	cout<<"\nChoice=";
	cin>>c;
	if(c==1)
	{
		cout<<"Enter Number Of Days=";
		cin>>d;
		d=d*24;
		cout<<"Hours="<<d;
	}
		if(c==2)
	{
		cout<<"Enter Number Of Days=";
		cin>>d;
		d=d*24*60;
		cout<<"Minutes="<<d;
	}
	return 0;
}
