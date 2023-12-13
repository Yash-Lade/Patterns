#include<iostream>
using namespace std;

int main()
{
    int i, j;

    for (i=0; i<6; i++)
    {
        for (j=0; j<7; j++)
        {
            if ((i==j && j<=3) || (i+j==6 && j>3))
            {
                cout << "@";
            }
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}


