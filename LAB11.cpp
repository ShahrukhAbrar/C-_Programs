//Lab11
#include <iostream>
#include<cmath>
#include <stdlib.h>
#include<tgmath.h>
using namespace std;
int main()
{
	int cho; 
    int a;
    int num1;
    int exit;
    int num2;
    double Result;
    
	cout << "                    Calculator V 1.0            "<<endl;


    cout<<"\n\n\n\n\nPress Enter to continue........"<<endl ;

cin.ignore();



    
                system("cls");    	
    cout<<"What Operation do you want to perform?"<< endl;
    cout<<"1:Addition"<<endl;            
    cout<<"2:Subtraction"<<endl;
    cout<<"3:Multiplication"<<endl;
    cout<<"4:Division"<<endl;
    cout<<"5:Divisible by 5"<<endl;
    cout<<"6:Odd/Even"<<endl;
    
	
    cout<<"\n\n\n\nChoice:";
    cin>> cho;


    if(cho==1)
    {
    	system("cls");
   cout<<"Enter first number :";
cin>>num1;
cout<<"Enter second number :";
cin>>num2;
Result=num1+num2;
cout<<"Result : "<<Result;
	}
	if(cho==2)
    {
  system("cls");

   cout<<"Enter first number :";
cin>>num1;
cout<<"Enter second number :";
cin>>num2;
Result=num1-num2;
cout<<"Result : "<<Result;
}

 else if(cho==3)
    {
   system("cls");
   cout<<"Enter first number :";
cin>>num1;
cout<<"Enter second number :";
cin>>num2;
Result=num1*num2;
cout<<"Result : "<<Result;
}

 else if(cho==4)
    {
system("cls");

   cout<<"Enter first number :";
cin>>num1;
cout<<"Enter second number :";
cin>>num2;
Result=num1/num2;
cout<<"Result : "<<Result;
}
 else if(cho==5)
    {
system("cls");

   cout<<"Enter a number :";
cin>>num1;

Result=num1%5;
if(Result==0)
{
cout<<"Divisible by 5";
}
else
cout<<"Not Divisible by 5";
}

 else if(cho==6)
    {
system("cls");

   cout<<"Enter a number :";
cin>>num1;
if(num1%2==0)
{
	cout<<"Even";
}
else
    cout<<"Odd";

}
	return 0;
}
