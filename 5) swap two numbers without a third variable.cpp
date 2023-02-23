// swap two nums without a third variable
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter value of a ";
	cin>>a;
	cout<<"Enter value of b ";
	cin>>b;
	cout<<"/nVlues before swapping are ";
	cout<<"\na="<<a;
	cout<<"\nb="<<b;
	cout<<"\nVlues after swapping are "<<endl;
    swap(a,b);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}

