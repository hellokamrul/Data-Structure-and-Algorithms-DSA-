#include<iostream>>
using namespace std;

int main(){
int row, column;

cout<<"Enter The Row number:";
cin>>row;

cout<<endl<<"Enter the Column Number:";
cin>>column;

for(int i=0 ;i <row;i++)
{

    for(int j =0; j<column ;j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
return 0;

}
