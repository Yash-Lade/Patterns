#include<iostream>
using namespace std;

int main()
{
	int i,j;

	cout<<"The pattern as follows :\n";
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(( i==1 && j%6!=0) || (i==5 && j%6!=0) || (i%6!=0 && j==1) || (i%6!=0 && j==5))
			cout<<"*";
			
			else
			cout<<" ";
		}
		cout<<"\n";
	}
}
