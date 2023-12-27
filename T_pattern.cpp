#include<iostream>
using namespace std;

int main()
{
	int i,j;
	
	cout<<"The patternm is as follows ::\n";
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			if((i==1 && j%10!=0) || (i%10!=0 && j==5) )
			cout<<"*";
			
			else
			cout<<" ";
		}
		cout<<endl;
	}
}
