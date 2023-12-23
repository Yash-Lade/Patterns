#include<iostream>
using namespace std;

int main()
{
	int i,j;

	cout<<"@Author - Yash Lade \n\n";
	cout<<"The pattern is as follows :\n\n";
	
	for(i=0;i<=7;i++)
	{
		for(j=0;j<=8;j++)
		{
			if((i%8!=-1 && j==0 || j==8) || ( i==3 ) && j%9!=0)
			cout<<"*";
			
			else
			cout<<" ";
		}
		cout<<endl;
	}
}
