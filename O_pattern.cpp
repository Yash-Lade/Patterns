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
			if(((i%7!=0 && j==2 || j==7) || ((i==0 || i==6) && j%8!=0 ) && j>=2 && j<7)) 
			 	cout<<"*";
			
			else
			cout<<" ";
		}
		cout<<endl;
	}
}
