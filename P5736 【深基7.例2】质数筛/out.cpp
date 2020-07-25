#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n, tmp;
bool prime_number(int n)
{
    if (n == 1)
    {
        return false;
    } // 1不是质数
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (prime_number(tmp))
        {
            cout << tmp;
            cout << " ";
        }
    }
}