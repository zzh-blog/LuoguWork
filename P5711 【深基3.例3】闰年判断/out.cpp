#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int year;
int main(){
    cin>>year;
    if(year%100 == 0){
        cout<<(year%400 == 0);
    }else{
        cout<<(year%4 == 0);
    }
    return 0;
}