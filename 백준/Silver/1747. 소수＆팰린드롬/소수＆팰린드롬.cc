#include <bits/stdc++.h>

using namespace std;

bool isPal(int n)
{
    int rev = 0;
    int temp = n;
    while (temp > 0)
    {
        int ld = temp % 10;
        rev = rev * 10 + ld;
        temp = temp / 10; 
    }
    return (rev == n);
}

bool isPrime(int n)
{
    if (n == 1) return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    
    while (true)
    {
        if (isPal(n) && isPrime(n)) {
            cout << n;
            break;
        }
        else n++;
    }
}
    