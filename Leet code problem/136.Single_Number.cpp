#include<iostream>
#include<vector>
using namespace std;

int find_uniqueValue(vector<int> &nums){
    int ans = 0;
    for(int val : nums){
       ans = ans^val;
    }
return ans;
}

int main(){
    vector<int> nums = {1,2,4,2,1};
    cout<<find_uniqueValue(nums);
    return 0;
}
