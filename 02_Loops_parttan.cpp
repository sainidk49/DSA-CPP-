#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of seq: ";
    cin >> n;
    char ch = 'A';
    char lastCh;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = i; j > 0; j--)
        {
            cout << ch << " ";

            // ch--;
            
        }
        ch++;
        cout << endl;
    }

    return 0;
}
