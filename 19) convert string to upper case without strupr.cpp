// convert string to upper case
#include<iostream>
using namespace std;
int main()
{
	int n;
	char str[20];
	cout<<"Enter a string";
	cin>>str;
	for(n=0; n<=str[n];n++)
	{
		if(str[n]>='a'&&str[n]<='z')
		{
		str[n]=str[n]-32;
	    }
	cout<<str[n];
    }
}

