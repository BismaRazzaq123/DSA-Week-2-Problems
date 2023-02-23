// Check that a number is prime or not
#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter a number to check that it is a prime number or not"<<endl;
	cin>>n;
	for(i=2;i<=n-1;i++)
	{
	if(n%i==0)
	{
	break;
	}
    }
	if(n==i)
	{
	cout<<"It is a prime number";
    }
    else
	{
		cout<<"Not a prime number";
	}
}
