#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	ifstream myfile("LAB16.txt");
	string c;
	int m;
	myfile>>c;
	cout<<c;
	myfile.close();
	return 0;
	
	
	
}
