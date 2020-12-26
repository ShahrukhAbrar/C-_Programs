//lab5
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int Pay[5];
cout<<"Enter 1st Employee Salary=";
cin>> 	Pay[0];
cout<<"Enter 2nd Employee Salary=";
cin>> 	Pay[1];
cout<<"Enter 3rd Employee Salary=";
cin>> 	Pay[2];
cout<<"Enter 4th Employee Salary=";
cin>> 	Pay[3];
cout<<"Enter 5th Employee Salary=";
cin>> 	Pay[4];

if(Pay[0]>Pay[1] && Pay[0]>Pay[2] && Pay[0]>Pay[3] &&Pay[0]>Pay[4])
 cout<<"1st Employee pay is gretest";
else if(Pay[1]>Pay[2] && Pay[1]>Pay[0] && Pay[1]>Pay[3] &&Pay[1]>Pay[4])
 cout<<"2nd Employee pay is gretest";
else if(Pay[3]>Pay[1] && Pay[3]>Pay[2] && Pay[0]<Pay[3] &&Pay[3]>Pay[4])
 cout<<"3rd Employee pay is gretest";
else if(Pay[2]>Pay[1] && Pay[0]<Pay[2] && Pay[2]>Pay[3] &&Pay[2]>Pay[4])
 cout<<"4th Employee pay is gretest";
 else if(Pay[4]>Pay[1] && Pay[4]>Pay[2] && Pay[4]>Pay[3] &&Pay[0]<Pay[4])
 cout<<"5th Employee pay is gretest";

else if(Pay[0]==Pay[1]==Pay[2]==Pay[3]==Pay[4])
cout<<"All Pays are Equal";
 else
 cout<<"Invalid Choice";


	
	return 0;
}
