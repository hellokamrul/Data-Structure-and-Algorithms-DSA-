#include<iostream>
#include<vector>

using namespace std;

bool isValid(vector<int> &arr,int n, int m,int maxTime)
{
    int painter = 1, time = 0;
    for(int i =0; i<n; i++)
    {
        if(time+arr[i] <=maxTime){
            time +=arr[i];
        }
        else{
            painter++;
            time = arr[i];
        }
    }

   return painter <= m ? true : false;
}


int minTimeToPaint(vector<int> &arr,int n, int m ){
    int sum =0, maxTime = -1;
    for(int i =0; i<n; i++)
    {
        sum +=arr[i];
        maxTime = max(maxTime, arr[i]);
    }

    int st = maxTime, end = sum;
    int ans = -1;
    while(st<=end){
        int mid = st + (end-st)/2;
         if(isValid(arr, n,  m, mid))
         {
             ans = mid;
             end = mid -1;
         }
         else{
            st = mid + 1;
         }
    }

    return ans;
}


int main()
{
    vector<int> arr = {40,30,10,20};
    int n= 4, m=2;

    cout<<minTimeToPaint(arr,n,m)<<endl;
    return 0;
}
