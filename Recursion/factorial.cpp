#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int factorial(int n)  // Normal Function
{
    if (n == 0)
    {
        return 1;
    }
    int fact = n * factorial(n - 1);  // Recursive Function  ---> [factorial(n - 1)]
    return fact;
}

int main()
{
    int n;
    cout << "Enter any Number: ";
    cin >> n;

    int answer = factorial(n);  // Function call

    cout << "The Factorial of " << n << " is: " << answer << endl;

    return 0;
}