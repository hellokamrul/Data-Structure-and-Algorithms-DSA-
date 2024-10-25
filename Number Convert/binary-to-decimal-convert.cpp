 #include<iostream>
 using namespace std;

 int binaryTOdecimal(int binNum){
 int ans=0; int pow =1;

 while(binNum>0){
    int rem = binNum%10;
    binNum = binNum/10;
    ans +=(rem*pow);
    pow = pow*2;
 }

 return ans;
 }

 int main(){
 int n;
 cin>>n;

 cout<<"Decimal Number is : "<<binaryTOdecimal(n)<<endl;

 return 0;
 }
