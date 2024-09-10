#include <iostream>
using namespace std;


// ============== convert decimal to binary ============
// int decToBinary(int decNum)
// {
//     int rem, ans = 0;
//     int pow = 1;
//     while (decNum > 0)
//     {
//         rem = decNum % 2;
//         decNum = decNum / 2;
//         ans += rem * pow;
//         pow = pow * 10;
//     }
//     return ans;
// }

// int main()
// {
//     int decNum;
//     cout << "Please enter a number to convert into binary :: ";
//     cin >> decNum;
//     cout << decToBinary(decNum) << endl;
//     return 0;
// }

// =========== convert binary to decimal ==============

int binaryToDec(int binary)
{
    int rem, ans = 0;
    int pow = 1;
    while (binary > 0)
    {
        rem = binary % 10;
        binary = binary / 10;
        ans += rem * pow;
        pow = pow * 2; 
    }
    return ans;
}

int main()
{
    int binaryNum;
    cout << "Please enter a number to binary into decimal :: ";
    cin >> binaryNum;
    cout << binaryToDec(binaryNum) << endl;
    return 0;
}