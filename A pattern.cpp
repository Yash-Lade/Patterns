#include<iostream>
using namespace std;

int main()
{
	int i,j;

	cout<<"@Author - Yash Lade !!\n\n";
	cout<<"The pattern is as follows :\n";
	
	for(i=0;i<=6;i++)
	{
		for(j=0;j<=10;j++)
		{
			if((i+j==5) || ((j-i==5) && i>=1 && j>=6) || (i==3 && j>=2 && j<=8))
			cout<<"*";
			
			else
			cout<<" ";
		}
		cout<<endl;
	}
}
