#include<iostream>
#include<bits/stdc++.h>
using namespace std;
double a,b,c,p,x;
int main(){
    cin>>a>>b>>c;
    p = (a+b+c)/2;
    x = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%0.1lf",x);
    return 0;
}