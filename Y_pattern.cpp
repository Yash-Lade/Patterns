#include<iostream>
using namespace std;

int main()
{
	int i,j;
	
	for(i=0;i<6;i++)
	{
		for(j=0;j<7;j++)
		{
			if((i-j==0 && i<=3) || (i+j==6 && i<=2) || ((j==3 && i%7!=0) && i>=3))
			{
				cout<<"@";
			}
			else
			cout<<" ";
		}
		cout<<"\n";
	}
}
