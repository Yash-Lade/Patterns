#include<iostream>
using namespace std;

int main()
{
	int i,j;
	
	cout<<"\n The Pattern is as follows :\n\n";
	for(i=0;i<=6;i++)
	{
		for(j=0;j<=8;j++)
		{
			if((i%7!=0 && j==0)  || (i%7!=0 && j==6) || ((i+j==6 || i-j==0) && i>=3))
			cout<<"*";
			
			else
			cout<<" ";
		}
		cout<<endl;
	}
}
