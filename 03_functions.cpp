#include <iostream>
using namespace std;

//// which is return nothing call void funtion
void hello()
{
    cout << "Hello " << endl;
}

/////========= return a intiger value =======
int sum(int a, int b)
{
    return a + b;
}

/////========= return a intiger value =======
int biggestValue(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

/////========== sum of n =====================
int SumN(int n)
{
    int i = 1, sum = 0;
    while (i <= n)
    {
        sum += i;
        i++;
    }

    return sum;
}

///// ========== sum n factorial =====================
int nFactorial(int n)
{
    int i = 1, factorial = 1;
    while (i <= n)
    {
        factorial *= i;
        i++;
    }

    return factorial;
}

///// ========== sum digits of a number =====================
int sumDigits(int n)
{
    int rem, sum = 0;
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;
        sum += rem;
    }

    return sum;
}

int bionomial(int n, int r)
{
    int fact_n = nFactorial(n);
    int fact_r = nFactorial(r);
    int fact_n_r = nFactorial(n - r);
    int ans = fact_n / (fact_r * fact_n_r);
    return ans;
}

///========= main funtion ===================
int main()
{
    // hello(); // invoke funtion
    // int a, b;
    // cout << "enter first value : ";
    // cin >> a;
    // cout << "enter second value : ";
    // cin >> b;
    // cout <<  "sum of two number : " << sum(a, b); //// invoke sum funtion here
    // cout <<  "Biggest number : " << biggestValue(a, b); //// invoke biggest funtion here

    // ========= sum of n numbers ===========
    // int n;
    // cout << "Enter a number : ";
    // cin >> n;
    // cout <<  "Sum of n numbers : " << SumN(n);  //// invoke sum n number here
    // cout << "Factroial of n numbers : " << nFactorial(n); //// invoke n factoril
    // cout << "Sum of digits of a number : " << sumDigits(n); //// invoke n sumDigits

    // ========= nCr binomial calc ===========
    int n, r, ans;
    cout << "Enter n number : ";
    cin >> n;
    cout << "Enter r number : ";
    cin >> r;
    ans = bionomial(n, r);
    cout << "bionomial cals  : " << ans;

    return 0;
}