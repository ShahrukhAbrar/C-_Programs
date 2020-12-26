//lab2
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int age;
	string firstName[2];
cout << "Type your first name: ";
cin >> firstName[0]; 
cout << "Type your Surname name: ";
cin >> firstName[1];
cout << "Type your age in years: ";
cin >> age;
age=age*12;
cout << "\nYour name is: " << firstName[0]<<" "<<firstName[1];
cout << "\nYour age in months is: " << age;	
	
	return 0;
}
