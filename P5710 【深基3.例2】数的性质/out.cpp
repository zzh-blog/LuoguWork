#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int a,b;
int num;
int main(){
    cin>>num;
    a = (num>1 && num%2 == 0);
    b = (num > 4 && num <= 12);
    printf("%d %d %d %d",a & b,a | b,a ^ b,(!a) & (!b));
}