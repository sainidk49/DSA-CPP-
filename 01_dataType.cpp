#include <iostream> // preprocessor directive
using namespace std;

int main()
{
    // ================ print and divid line =================
    // cout << "dk saini 1 " << endl;              // 1. for the end line
    // cout << "dk saini 2 " << "\n";              // 2.  for the end line
    // cout << "dk saini 3 \n";                    // 3. for the end line
    // cout << "dk saini 4 \ndk saini 5 \n";      // 4. for the end line
    // cout << "dk saini 6 ";
    // return 0;

    // ================ data type and size =================
    // int age = 25;
    // char grade = 'A';
    // float PI = 3.14f;
    // bool isCorrect = true;
    // double price = 100.99;

    // cout << age << endl;
    // cout << grade << endl;
    // cout << PI << endl;
    // cout << isCorrect << endl;      // return => 0 and 1
    // cout << price << endl;          // return => 100
    // return 0;

    // ============ Implicit conversion ====================
    // char grade = 'A';
    // int convert = grade;

    // cout << grade << endl;
    // cout << convert << endl;

    // return 0;

    // ============ Explicit conversion ====================
    // double price = 100.99;
    // int convert = (int)price;

    // cout << price << endl;
    // cout << convert << endl;

    // return 0;

    // // ============ take input by user ====================
    // int age;
    // cout << "enter your age : ";
    // cin >> age;
    // cout << "your age is " << age << endl;

    // return 0;

    // ============ Operations ====================

    //// arthemetic Operator
    // int a = 9, b = 5;
    // cout << "Sum of a and b : " << (a + b) << endl;
    // cout << "Sub of a and b : " << (a - b) << endl;
    // cout << "Mul of a and b : " << (a * b) << endl;
    // cout << "div of a and b : " << (a / (double)b) << endl;
    // cout << "mod of a and b : " << (a % b) << endl;

    //// Relational (Comparison) Operator
    // int x = 10, y = 20;
    // cout << (x == y) << endl; // false (0)
    // cout << (x != y) << endl; // true (1)
    // cout << (x < y) << endl;  // true (1)
    // cout << (x > y) << endl;  // false (0)

    //// Logical Operator
    // bool a = true, b = false;
    // cout << (a && b) << endl; // false (0)
    // cout << (a || b) << endl; // true (1)
    // cout << (!a) << endl;     // false (0)

    //// Ternary Operator
    // int a = 10, b = 20;
    // int max = (a > b) ? a : b;
    // cout << "Max: " << max << endl;

    //// Bitwise Operators
    int a = 4, b = 8;
    // cout << (a & b) << endl;  // AND
    // cout << (a | b) << endl;  // OR
    // cout << (a ^ b) << endl;  // XOR
    // cout << (a << 1) << endl; // Left shift
    cout << (a >> 1) << endl; // Right shift
    // cout << (~a) << endl;     // NOT

    return 0;
}