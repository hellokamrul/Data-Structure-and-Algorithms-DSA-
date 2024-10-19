#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    //outer loop : 0 to n-1
    for(int i=0;i<n;i++)
    {
        //space : n-i-1
        for(int j = 0;j<n-i-1;j++)
        {
            cout<<" ";
        }

        //number 1: i+1
        for(int j = 1;j<=i+1;j++)
        {
            cout<<j;
        }

        //num2: 0
        for(int j = i;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}
