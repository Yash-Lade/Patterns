#include<iostream>
using namespace std;

int main()
{
	int n=4;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i>=j)
			cout<<"*";
			
			else
			cout<<" ";
		}
		
		for(int j=n;j>0;j--)
		{
			if(j>i)
			cout<<" ";
			else
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>0;j--)
		{
			if(j<i)
			cout<<" ";
			else
			cout<<"*";
		}
		for(int j=1;j<=n;j++)
		{
			if(j>=i)
			cout<<"*";
			
			else
			cout<<" ";
		}
		cout<<endl;
	}
	
}
