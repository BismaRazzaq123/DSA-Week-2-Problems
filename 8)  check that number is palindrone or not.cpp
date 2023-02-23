#include<iostream>
using namespace std;
int main()
{
	int n, rem, temp, rev=0;
	cout<<"enter a number to check that it is palindrone or not ";
	cin>>n;
	temp=n;
	
	for(n; n>0;)
 	{
 		rem=n%10;
 		rev=(rev*10)+rem;
 		n=n/10;
	}
	if(rev==temp)
	{
		cout<<"number is palindrone ";
	}
	else
	{
		cout<<"number is not palindrone ";
	}
}
