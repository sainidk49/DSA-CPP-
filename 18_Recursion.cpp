#include <iostream>
#include <vector>
using namespace std;

// // == == == == == == print 1 to n number == == == == == == == ==
// int printNums(int n)
// {
//     if (n < 1)
//     {
//         return 1;
//     }
//     printNums(n - 1);

//     cout << n << " ";
// }

// int main()
// {
//     int number;
//     cout << "Enter the number to print 1 to number :: ";
//     cin >> number;
//     if (number)
//     {
//         cout << "Series of number :: ";
//         printNums(number);
//     }

//     return 0;
// }

// // == == == == == == factorial number == == == == == == == ==
// int factorial(int n)
// {
//     int fectValue = 1;
//     if (n <= 1)
//     {
//         return 1;
//     }

//     return n * factorial(n - 1);
// }

// int main()
// {
//     int number, result;
//     cout << "enter factorial number :: ";
//     cin >> number;
//     result = factorial(number);
//     cout << "Factorial value of " << number << " is: " << result << endl;
//     return 0;
// }

// // == == == == == == fabonacci number == == == == == == == ==
// int fabonacci(int n)
// {
//     if (n <= 1)
//     {
//         return n;
//     }

//     return fabonacci(n - 1) + fabonacci(n - 2);
// }

// int main()
// {
//     int number, result;
//     cout << "enter number to make to fabonacci:: ";
//     cin >> number;
//      cout << "Fabonacci list of " << number << " is: ";
//     for (size_t i = 0; i < number; i++)
//     {
//         result = fabonacci(i);
//         cout << result << ", ";
//     }

//     return 0;
// }

// == == == == == == check array is shorted or not == == == == == == == ==
// int checkArray(int size, int arr[]) //// for array
int checkArray(int size, vector<int> arr) //////// for vector
{
    if (size == 1)
    {
        cout << "array is sorted.";
        return 0;
    }

    if (arr[size - 1] >= arr[size - 2])
    {
        // return checkArray(size - 1, arr); /// for array
        return checkArray(size - 1, arr); //////// for vector
    }
    else
    {
        cout << "array is not sorted.";
    }
}

int main()
{
    // // by using array
    // int arr[5];
    // int size = sizeof(arr) / sizeof(int);
    // cout << "enter number :: ";
    // for (size_t i = 0; i < 5; i++)
    // {
    //     cin >> arr[i];
    // }

    // by using vector
    vector<int> arr;
    int number;
    cout << "how long your vector :: ";
    cin >> number;
    if (number != 0)
    {
        arr.resize(number);
        cout << "enter your " << number << " vector number :: ";
        for (size_t i = 0; i < number; i++)
        {
            cin >> arr[i];
        }

        if (arr.size() > 0)
        {
            checkArray(number, arr);
        }
    }

    return 0;
}