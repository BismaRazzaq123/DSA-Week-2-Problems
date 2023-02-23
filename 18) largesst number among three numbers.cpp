//program to find largest among three
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,lrg;
	cout<<"Enter three numbers "<<endl;
	cin>>a>>b>>c;
	if(a>b && a>c)
	{
		cout<<"Largest number is "<<a;
	}
	else if(b>a && b>c)
	{
		cout<<"Largest number is "<<b;
	}
	else
	cout<<"Largest numbr is "<<c;
}


