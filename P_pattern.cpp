#include<iostream>
using namespace std;

int main()
{
	int i,j;
	char ch=178;
	
	cout<<"The pattern is as follows :\n\n";
	
	for(i=0;i<=6;i++)
	{
		for(j=0;j<=4;j++)
		{
			if((i==0 || i==3 && j%5!=0) || (i%7!=0 && j==0) || ((i%7!=0 && j==4) && i<=3))
			cout<<ch;
			
			else
			cout<<" ";
		}
		cout<<endl;
	}
}
