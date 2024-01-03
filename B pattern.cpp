#include<iostream>
using namespace std;

int main()
{
	int i,j;
	char c=219;

	cout<<"@Author - Yash Lade \n\n";
	cout<<"The pattern is as follows :\n\n";
	
	for(i=0;i<=6;i++)
	{
		for(j=0;j<=7;j++)
		{
			if(((i==0 || i==3 || i==6) && j%8!=7) || (i%6!=7 && j==0) || (i%3!=0 && j==7))
			cout<<c;
			
			else
			cout<<" ";

		}
		cout<<endl;
	}
}
