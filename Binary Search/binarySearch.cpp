#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int tar){
    int st=0, end =arr.size()-1;

    while(st<=end) {
       // int mid = (st+end)/2;// for max int it will be over flow
        int mid = st +(end-st)/2;
        if(tar>arr[mid]){
            st = mid + 1;
        }
        else if(tar <arr[mid]){
            end = mid - 1;
        }else{
            return arr[mid];
        }
    }
    return -1;
}


int main()
{

    vector<int> nums = {1, 2,3,4,5,6,7,8,9,10,12};
    int target = 0;

    cout<<binarySearch(nums,target)<<endl;
}
