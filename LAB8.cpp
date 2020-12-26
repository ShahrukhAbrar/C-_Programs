//lab8
#include <iostream>
using namespace std;

int main()
{
	int a,b;
cout<<"Enter Your Marks=";
cin>>a;
 
 
if(a>90)
cout<<"Grade=A";
else if(a>=86 && a<90)
cout<<"Grade=A-";
else if(a>=81 && a<86)
cout<<"Grade=B+";
else if(a>=77 && a<81)
cout<<"Grade=B";
else if(a>=72 && a<77)
cout<<"Grade=B-";
else if(a>=68 && a<72)
cout<<"Grade=C+";
else if(a>=63 && a<68)
cout<<"Grade=C";
else if(a>=58 && a<63)
cout<<"Grade=C-";
else if(a>=54 && a<58)
cout<<"Grade=D+";
else if(a>=50 && a<54)
cout<<"Grade=D";
else if(a<50)
cout<<"Grade=F";

	return 0;
}
