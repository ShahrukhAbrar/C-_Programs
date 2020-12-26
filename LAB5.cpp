//lab5
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int unit,rate;
	float surc,bill;
cout<<"Enter the number of Units=";
cin>> unit;

if(unit>=300)
{
	bill=(unit*3.5);
	surc=bill/100*5;
	bill=bill+surc;
	cout<<"\nAmount="<<bill;
}
else if (unit<300)
{
	bill=(unit*3);
	cout<<"\nAmount="<<bill;
}
else
cout<<"Enter Valid Number";
	
	return 0;
}
