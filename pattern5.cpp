#include<iostream>
using namespace std;

int main()
{
	int i,j,n;

	cout<<"@Author - Yash Lade !! \n";
	cout<<"Enter the no. :";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i+1;j++)
		cout<<"*";
		
		cout<<endl;
	}
}
