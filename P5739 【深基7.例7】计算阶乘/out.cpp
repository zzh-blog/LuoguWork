#include <bits/stdc++.h>
using namespace std;
int n,count_ = 1;
long long factorial(long long x){
    if(count_<n){
        count_++;
        factorial(x*count_);
    }else{
        return x;
    }
}
int main(){
    cin>>n;
    cout<<factorial(1);
    return 0;
}