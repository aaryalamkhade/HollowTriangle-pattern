#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter the value of n:"<<endl;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		for(int j=2*n;j>i;j--)
	    {
	    	cout<<" ";
		}
		for(int k=0;k<i;k++)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	int t=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>i;j--)
	    {
	    	cout<<" ";
		}
		for(int k=0;k<i;k++)
		{
			cout<<"*"<<" ";
			t=k;
		}
		for(int l=2*n-1;l>i+t;l--)
		{
			cout<<" ";
		}
		for(int o=0;o<i;o++)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}
