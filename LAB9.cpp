//lab9
#include<iostream>
using namespace std;
int main()
{
	int n,r;
	cout<<"Enter a Number=";
	cin>>n;
	r=n%5;
	switch(r)
	{
		case 0: 	cout<<"Divisible by 5";
		break;
		default:	cout<<"Not Divisible by 5";
	}
	return 0;
}
