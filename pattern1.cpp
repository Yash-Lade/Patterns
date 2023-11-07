#include<iostream>
using namespace std;

int main()
{
	int i,j,n;
	
	cout<<"The pattern is as followed \n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		cout<<"*";
		
		cout<<"\n";
	}
}
