#include<iostream>
using namespace std;

int main()
{
	int i,j,ro,co;
	
	cout<<"Enter the rows :";
	cin>>ro;
	
	cout<<"Enter the columnes  :";
	cin>>co;
	
	int rp=ro+1;
	int cp=co+1;
	cout<<"The pattern as follows :\n";
	for(i=1;i<=ro;i++)
	{
		rp=ro+1;
		for(j=1;j<=co;j++)
		{
			if(( i==1 && j%cp!=0) || (i==5 && j%cp!=0) || (i%rp!=0 && j==1) || (i%rp!=0 && j==5))
			cout<<"*";
			
			else
			cout<<" ";
		}
		cout<<"\n";
	}
}
