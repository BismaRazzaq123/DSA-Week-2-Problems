#include<iostream>
using namespace std;
int main()
{
	int i,num,t;
	cout<<"enter a number ";
	cin>>num;
	for(i=1; i<=10; i++)
	{
		t=i*num;
		cout<<num<< " * "<<i<<" = "<< t<<"\n";
	}
}
