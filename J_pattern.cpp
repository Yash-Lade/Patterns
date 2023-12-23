#include<iostream>
using namespace std;

int main()
{
	int i,j;

	cout<<"\n@Author - Yash Lade \n\n";
	cout<<"The pattern is as follows ::\n";
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			if((i==1 && j%10!=0) || (i%10!=0 && j==5) || ((i==9 && j%6!=0) && j<6) || (i%5!=0 && j==1) && i>4)
			cout<<"*";
			
			else
			cout<<" ";
		}
		cout<<endl;
	}
}
