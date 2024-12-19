#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // int arr[] = {1,2,3,4,5};
    // int n =  sizeof(arr)/ sizeof(int);
    // ========== all sub-array and sub-arrays should be = n*(n+1)/2 ===========
    // for (int start = 0; start < n; start++)
    // {
    //     for (int end = start; end < n; end++)
    //     {
    //         for (size_t i = start; i <= end; i++)
    //         {
    //             cout << arr[i];
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // }
    // return 0;

    //// ========== maxium subarray sum with bruit force Approach ===========
    // int arr[] = {3, -4, 5, 4, -1, 7, -8};
    // int n = sizeof(arr) / sizeof(int);
    // int maxSum = INT16_MIN;
    // for (int start = 0; start < n; start++)
    // {
    //     int currSum = 0;
    //     for (int end = start; end < n; end++)
    //     {
    //         currSum += arr[end];
    //         maxSum = max(currSum, maxSum);
    //     }
    //     cout << maxSum << endl;
    // }
    // cout << "max-sum :: " << maxSum;
    // return 0;

    //// ========== maxium subarray sum with Khadan's algo ===========
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int n = sizeof(arr) / sizeof(int);
    int maxSum = INT16_MIN;
    int currSum = 0;
    for (int start = 0; start < n; start++)
    {
        currSum += arr[start];
        maxSum = max(currSum, maxSum); 
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout << "max-sum :: " << maxSum;
    return 0;
}
