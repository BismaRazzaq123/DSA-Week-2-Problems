#include<iostream>
using namespace std;
int main()
{
	int n, rem, temp;
	cout<<"enter a number to reverse ";
	cin>>n;
	
	for(n; n>0;)
 	{
 		rem=n%10;
 		cout<<rem;
 		n=n/10;
	}
}
