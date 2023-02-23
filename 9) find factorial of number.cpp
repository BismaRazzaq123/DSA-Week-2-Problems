//Find factorial of a number
#include<iostream>
using namespace std;
int main()
{
	int n,i,fact=1;
	cout<<"Enter a number to find its factorial ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	fact=fact*i;
    }
	cout<<"Factorial of number is "<<fact;
}
