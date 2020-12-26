#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream myfile;
	myfile.open("LAB16.txt");
	myfile<<"This is the program that tell how to write in a text file";
	myfile.close();
	return 0;
	
	
	
}
