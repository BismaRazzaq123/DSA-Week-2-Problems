//program to check that number is positive negative or zero
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number ";
	cin>>n;
	if(n>0)
	cout<<"Number is positive ";
	else if(n<0)
	cout<<"Number is negative";
	else
	cout<<"Number is zero";
}
