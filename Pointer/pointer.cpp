#include<iostream>
#include<vector>
using namespace std;

int main(){

    int a = 10;
    int* ptr = &a;
    cout <<ptr<<endl;
    cout << &a<<endl;
    cout<<&ptr<<endl;

    //pointer to pointer

    int** ptr2 = &ptr;
    cout<<ptr2<<endl;

    //Dereference operator
    cout<<*(&a)<<endl;
    cout<<*ptr<<endl;
    cout<<*ptr2<<endl;//ptr-> memory address
    cout<<**ptr2<<endl;

    //null pointer

    int** ptr = NULL;




}
