#include<iostream>
using namespace std;

int main()
{
	int i,j;
	
	cout<<"The pattern is as follows ::\n\n";
	
	for(i=0;i<=6;i++)
	{
		for(j=0;j<=7;j++)
		{
			if((i%7!=8 && j==0) || (i+j==3) && j>=1 || (i-j==3) && j>=1)
			cout<<"*";
			
			else
			cout<<" ";
		}
		cout<<endl;
	}
}
