#include<iostream>
using namespace std;

int main()
{
	int i,j;
	char c=219;
	
	cout<<"The pattern is as follows :\n\n";
	
	for(i=1;i<=6;i++)
	{
		for(j=0;j<=7;j++)
		{
			if(((i==1 || i==6) && j%8!=7) || (i%6!=7 && j==0) || (i%7!=0 && j==7) && i>=3 || (i==3 && j%8!=0) && j>=3 
			   && j<=6 || (i==4 && j==3) || (i==1 && j==7))
			cout<<c;
			
			else
			cout<<" ";

		}
		cout<<endl;
	}
}
