#include<iostream>
using namespace std;

int main()
{
	int i,j;
	char ch=92;
	
	cout<<"The pattern is as follows :\n";
	
	for(i=0;i<=6;i++)
	{
		for(j=0;j<=11;j++)
		{
			if((i+j==5) )
			cout<<"/";
			
			else if(( j-i==6))
			cout<<ch;
			
			else if(i==3 && j>=2 && j<=8)
			cout<<"-";
			
			else
			cout<<" ";
		}
		cout<<endl;
	}
}
