#include<iostream>
#include <vector>
using namespace std;


bool isValid(vector<int> &arr, int n, int m, int maxPage)
{
    int st =1, page =0;

    for(int i =0; i<n;i++)
    {
        if(arr[i]>maxPage){
            return false;
        }
       if(page+arr[i]<=maxPage)
       {
           page+=arr[i];
       }else{
           st++;
           page = arr[i];
       }

    }
    return st > m ? false : true;
}


int allocateBooks(vector<int> &arr, int n, int m)
{
    if(m>n){
        return -1;
    }
    int sum =0;
    for(int i=0;i<n;i++){
       sum +=arr[i] ;
    }

    int st =0, end =sum;
    int ans =-1;
    while(st<=end){
        int mid = st +(end-st)/2;
        if(isValid(arr,n,m,mid))
        {
            ans = mid;
            end = mid -1;
        }
        else
        {
            st = mid+1;
        }
    }
    return ans;
}


int main()
{
    vector<int> arr = {15,17,20,25};
    int n=4, m=2;

    cout<<allocateBooks(arr,n,m)<<endl;
    return 0;
}
