#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<fstream>
using namespace std;
int num[10];
readarr(int num[10])
{
	for (int k=0; k<=9; k++)
	{
		cout<<"\nEnter "<<k+1<<" Number:";
		cin>>num[k];
	}
}
	void printindex(int num[10])
	{    cout<<"Index"<<endl;
		for (int k=0; k<=9; k++)
		{
			cout<<setw(5)<<num[k];
		}
	}
	void smallest(int num[10])
	{
			int sum=num[0];
		for (int k=0; k<=9; k++)
		{
			
			if(sum>num[k])
			{
				sum=num[k];
			}
		}
			cout<<"Smallest Number is:"<<sum<<endl;
		
	}
	int main()
	{
		int num1[10];
		readarr(num1);
		system("cls");
		smallest(num1);
		cout<<endl;
		printindex(num1);
		
		return 0;
	}


