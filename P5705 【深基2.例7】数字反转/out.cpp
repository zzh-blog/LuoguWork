#include<iostream>
using namespace std;
string a;
int main() {
    cin>>a;
    for(int i = a.length()-1;i>=0;i--){
        cout<<a[i];
    }
}