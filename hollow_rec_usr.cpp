#include<iostream>
using namespace std;

int main()
{
	int i,j,ro,co;
	char chn=178;
	
	cout<<"Enter the rows : ";
	cin>>ro;
	
	cout<<"Enter the columnes : ";
	cin>>co;
	
	cout<<"The pattern as follows :\n"<<endl;
	for(i=1;i<=ro;i++)
	{
		for(j=1;j<=co;j++)
		{
			if(( i==1 || i==ro || j==1 || j==co) )
			cout<<chn;
			
			else
			cout<<" ";
		}
		cout<<"\n";
	}
}
