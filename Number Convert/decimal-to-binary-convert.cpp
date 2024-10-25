#include<iostream>
using namespace std;

int desimalTobinary(int decNum){
    int pow=1;
    int ans=0;


    while(decNum>0){
        int rem = decNum%2;
        decNum = decNum/2;
        ans = ans + (rem*pow);
        pow = pow*10;

    }

    return ans;
}



int main()
{
    int decNum;
    cin>>decNum;

    cout<<"In Binary : "<<desimalTobinary(decNum)<<endl;

    return 0;
}
