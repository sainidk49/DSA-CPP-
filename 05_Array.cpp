#include <iostream>
using namespace std;

// ============ smallest number ===============
// int main()
// {
//     int mask[5];
//     int maskLength = sizeof(mask) / sizeof(int);
//     for (int i = 0; i < maskLength; i++)
//     {
//         cout << "Index :: ";
//         cin >> mask[i];
//     }
//     int smallNum = INT8_MAX;
//     for (int i = 0; i < maskLength; i++)
//     {
//         if (mask[i] < smallNum)
//         {
//             smallNum = mask[i];
//         }

//         // or
//         // smallNum = min(mask[i], smallNum);
//     }
//     cout << "smallest is :: " << smallNum;
//     return 0;
// }

//// =============== linear search =================
// int main() {
//     int arry[5] = {5, 48, 4, 88, 9};
//     int arrLength = sizeof(arry) / sizeof(int);
//     int target;
//     cout << "Target :: ";
//     cin >> target;
//     bool found = false;
//     for (int i = 0; i < arrLength; i++) {
//         if (target == arry[i]) {
//             cout << "index : " << i << endl;
//             found = true;
//             break;
//         }
//     }
//     if (!found) {
//         cout << "index : -1" << endl;
//     }

//     return 0;
// }

//// =============== reverse Array =================
int reverseArray(int array[], int sizeArray)
{
    int start = 0, end = sizeArray - 1;
    while (start < end)
    {
        swap(array[start], array[end]);
        start++;
        end--;
    }
    
}

int main()
{
    int arry[] = {5, 48, 4, 88, 9};
    int arrLength = sizeof(arry) / sizeof(int);

    cout << reverseArray(arry, arrLength);
    for (size_t i = 0; i < arrLength; i++)
    {
       cout << "index :: " << arry[i] << endl;
    }
    
    return 0;
}