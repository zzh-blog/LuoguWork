#include <iostream>
#include <bits/stdc++.h>
using namespace std;
double m, h, bmi;
int main()
{
    scanf("%lf %lf", &m, &h);
    bmi = m / (h * h);
    if (bmi < 18.5)
    {
        cout << "Underweight";
    }
    else if (bmi >= 18.5 && bmi < 24)
    {
        cout << "Normal";
    }
    else
    {
        cout << bmi << endl;
        cout << "Overweight";
    }
}