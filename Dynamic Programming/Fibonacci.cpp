#include <iostream>

using namespace std;

int fibonacci(int n)
{
    int fibo[n + 2];
    fibo[0] = 0;
    fibo[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    cout << "Fibonacci series :" << endl;
    ;

    for (int i = 0; i <= n; i++)
    {
        cout << fibo[i] << endl;
        ;
    }
}

int main()
{
    int n;
    cout << "Enter the term : ";
    cin >> n;
    fibonacci(n);
}
