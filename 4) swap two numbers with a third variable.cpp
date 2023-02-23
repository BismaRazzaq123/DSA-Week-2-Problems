//Program 4 to swap two numbers with a third variable
#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"Enter value of a ";
	cin>>a;
	cout<<"Enter value of b ";
	cin>>b;
	cout<<"Values before swapping are "<<endl;
    cout<<"a="<<a;
	cout<<"\nb="<<b;
	cout<<"\nVlues after swapping are "<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"a="<<a;
	cout<<"\nb="<<b;
}
