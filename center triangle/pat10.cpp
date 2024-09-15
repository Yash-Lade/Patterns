#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number :";
	cin>>n;
	cout<<endl;
	for(int i=1;i<=n;i++)
	{
		int num=1;
		for(int j=n;j>=1;j--)
		{
			if(i>=j){
				cout<<num;
				num++;
			}
				
			else
			cout<<" ";	
		}
		for(int j=i-1;j>=1;j--)
		{
			cout<<j;
		}
		cout<<endl;
	}
}
