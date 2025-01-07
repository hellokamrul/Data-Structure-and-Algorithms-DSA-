 #include<iostream>
 #include<vector>
 using namespace std;

 void changeA(int* ptr)//pass by ref using pointer
 {
     *ptr = 20;
 }

 void changeA(int &b){ //pass by reference using alias
    b =20;
 }

 int main()
 {
     int a = 10;
     int x = 5;
     changeA(&a);
     changeA(x);
     cout<<"inside main fnx : a = "<<a<<endl;
     cout<<"inside main fnx: x = "<<x<<endl;

 }
