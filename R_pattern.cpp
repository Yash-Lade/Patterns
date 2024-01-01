#include<iostream>
using namespace std;

int main()
{
	int i,j;
	char ch=178;
	
	cout<<"The pattern is as follows :\n\n";
	
	for(i=0;i<=7;i++)
	{
		for(j=0;j<=4;j++)
		{
			if((i==0 || i==3 && j%5!=0) || (i%8!=0 && j==0) || ((i%8!=0 && j==4) && i<=3) || (i-j==3))
			cout<<"@";
			
			else
			cout<<" ";
		}
		cout<<endl;
	}
}
