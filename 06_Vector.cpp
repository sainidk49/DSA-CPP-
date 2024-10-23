#include <iostream>
#include <vector>
using namespace std;

// int main()
// {

//     // ============= vector in int ==============
//     // vector<int> vec;
//     // vector<int> vec = {2, 3, 5};
//     // vector<int> vec (3, 0); //=>{0,0,0}
//     // for (int i : vec)
//     // {
//     //     cout << i << endl;
//     // }

//     // ============= vector in charactor ==============
//     // vector<char> vec = {'a', 'b', 'c', 'd'};
//     // for (char i : vec){ /////// this called forEach loop
//     //     cout << i << endl;
//     // }

//     // // ================= Loop ====================
//     // vector<int> vec;
//     // int size = 5;
//     // for (int i = 1; i <= size; i++)
//     // {
//     //     int value;
//     //     cout << "enter value of vector :: ";
//     //     cin >> value;
//     //     vec.push_back(value);
//     // }
//     // vec.pop_back(); /// remove element from fast
//     // for (int j = 0; j < vec.size(); j++)
//     // {
//     //     cout << "vector ::" << vec[j] << endl;
//     // }
//     // cout << "fron value of vector ::" << vec.front() << endl;
//     // cout << "back value of vector ::" << vec.back() << endl;
//     // cout << "Index at value of vector ::" << vec.at(1) << endl;

//     // ================= size and capacity ====================
//     vector<int> vec;
//     vec.push_back(3);
//     vec.push_back(1);
//     vec.push_back(2);
//     cout << "Size of vector::" << vec.size() << endl; /////////// size will be 3
//     cout << "Capacity of vector ::" << vec.capacity() << endl; ////////////// capacity will be 4

//     return 0;
// }

int singleNum(vector<int> &nums)
{
    // int singleNo = nums[0];
    // for (size_t i = 1; i < nums.size(); i++)
    // {
    //     singleNo = singleNo ^ nums[i];
    // }

    // other way 
    int singleNo = 0;
    for (size_t i = 0; i < nums.size(); i++)
    {
        singleNo ^= nums[i];
    }
    return singleNo;
}

int main()
{

    vector<int> vec = {5, 3, 5, 3, 4};
    cout << "singleNum :: " << singleNum(vec);

    return 0;
}