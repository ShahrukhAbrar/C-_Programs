#include<iostream>
#include<cmath>
#include <stdlib.h>
#include<tgmath.h>
using namespace std;
int main()
{
	int a,b,c,choice,Z,z;                                                  /*Z=Check to see solution type*/
	char ch;
	
	long int x[2];
	do
	{
	system("cls");
	cout<<"Choose Equation Type";
	cout<<"\n1:-ax^2+bx+c=0";
	cout<<"\n2:-ax^2-bx+c=0";
	cout<<"\n3:-ax^2-bx-c=0";
	cout<<"\n4:ax^2+bx+c=0";
	cout<<"\n5:ax^2-bx-c=0";
	cout<<"\n6:ax^2+bx-c=0";
	cout<<"\n7:ax^2-bx+c=0";
	cout<<"\nChoice=";
	cin>>choice;
	if(choice==1)
	{
	
	cout<<"\nEnter Constant Values";
	cout<<"\nEnter Value of a=";
	cin>>a;
	cout<<"\nEnter Value of b=";
	cin>>b;
	cout<<"\nEnter Value of c=";
	cin>>c;
	cout<<a<<"x^2+"<<b<<"x+"<<c<<"=0";
    }
    else if(choice==2)
	{
	
	cout<<"\nEnter Constant Values";
	cout<<"\nEnter Value of a=";
	cin>>a;
	cout<<"\nEnter Value of b=";
	cin>>b;
	cout<<"\nEnter Value of c=";
	cin>>c;
	cout<<a<<"x^2"<<b<<"x+"<<c<<"=0";
    }
    else if(choice==3)
	{
	
	cout<<"\nEnter Constant Values";
	cout<<"\nEnter Value of a=";
	cin>>a;
	cout<<"\nEnter Value of b=";
	cin>>b;
	cout<<"\nEnter Value of c=";
	cin>>c;
	cout<<a<<"x^2"<<b<<"x"<<c<<"=0";
    }
    else if(choice==4)
	{
	
	cout<<"\nEnter Constant Values";
	cout<<"\nEnter Value of a=";
	cin>>a;
	cout<<"\nEnter Value of b=";
	cin>>b;
	cout<<"\nEnter Value of c=";
	cin>>c;
	cout<<a<<"x^2+"<<b<<"x+"<<c<<"=0";
    }
    else if(choice==5)
	{
	
	cout<<"\nEnter Constant Values";
	cout<<"\nEnter Value of a=";
	cin>>a;
	cout<<"\nEnter Value of b=";
	cin>>b;
	cout<<"\nEnter Value of c=";
	cin>>c;
	cout<<a<<"x^2"<<b<<"x"<<c<<"=0";
    }
    else if(choice==6)
	{
	
	cout<<"\nEnter Constant Values";
	cout<<"\nEnter Value of a=";
	cin>>a;
	cout<<"\nEnter Value of b=";
	cin>>b;
	cout<<"\nEnter Value of c=";
	cin>>c;
	cout<<a<<"x^2+"<<b<<"x"<<c<<"=0";
    }
    else if(choice==7)
	{
	
	cout<<"\nEnter Constant Values";
	cout<<"\nEnter Value of a=";
	cin>>a;
	cout<<"\nEnter Value of b=";
	cin>>b;
	cout<<"\nEnter Value of c=";
	cin>>c;
	cout<<a<<"x^2"<<b<<"x+"<<c<<"=0";
    }
    else
    {
    	cout<<"Wrong Input";
	}
	
    cout<<"\nChecking If Quadretic Equation has any real solution";
    Z=(b*b)-4*a*c;
    z=sqrt(Z);
    if(z==0)
    {
    	cout<<"\nThis equation has only one real solution";
    	x[1]=(-b+z)/2*a;
    	cout<<"\nRoot of This Equation Is="<<x[0];
	}
	else if(z>0)
	{
	cout<<"\nThis equation has Two real solution";
	x[0]=(-b+z)/2*a;
    x[1]=(-b-z)/2*a;
    cout<<"\nRoots of This Equation Are="<<x[0]<<" And "<< x[1]; 	
	}
	else if(z=sqrt(-Z))
	{
	cout<<"\nThis equation has no real solution";
	cout<<"\nQuitting";
	}
   cout<<"\n\nDo you want to Continue? (y/n):";
   cin>>ch;
}
  while(ch!='n');


}
