#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums ={2,2,1,1,1,2,2,1,1};
    int n = nums.size();
    for(int val: nums)
        {
            int fequecy =0;
            for(int element:nums)
            {
                if(element == val)
                {
                    fequecy++;
                }
            }
            if(fequecy>n/2)
                {
                    cout<<val;
                    return 0;

                }
    }

    return -1;
}

