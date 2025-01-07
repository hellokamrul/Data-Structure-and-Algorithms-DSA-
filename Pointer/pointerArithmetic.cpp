#include<iostream>
using namespace std;

int main()
{
    int a =10;
    int* ptr = &a;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;

    ptr--;
    cout<<ptr<<endl;

    //add
   ptr = ptr+1;
    cout<<ptr<<endl;

    //substract
    ptr = ptr-2;
    cout<<ptr<<endl;

    int arr[] ={1,2,3,4,5};
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    cout<<*(arr+3)<<endl;
    cout<<*(arr+4)<<endl;

    //substract
    int* ptr3;
    int* ptr5;
    int* ptr4 =ptr3+1;
    cout<<ptr3-ptr4<<endl;
    cout<<ptr3<<endl;
    cout<<ptr5<<endl;

    cout<<(ptr3!=ptr5)<<endl;




}
