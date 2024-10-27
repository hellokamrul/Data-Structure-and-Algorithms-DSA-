#include<iostream>
#include <climits>
using namespace std;
int findMin_Number(int arr[],int sizes)
{
    int minNum = INT_MAX;
   // int  sizes = sizeof(arr) / sizeof(int);
    //cout<<"Size :"<<sizes;
    for(int i=0;i<sizes;i++)
    {
        //        if(minNum>arr[i]){
        //            minNum = arr[i];
        //        }

        //use min function
        minNum = min(minNum,arr[i]);

    }
    return minNum;
}


int main()
{
    int num[5] = {30, 70, 2, 7, -20};
    // Calculate size in main
    int sizes = sizeof(num) / sizeof(num[0]);
     // Pass size & Array  to the function
    int ans = findMin_Number(num, sizes);
    cout << "Minimum Number: " << ans << endl;
}
