#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int start, end_;
queue<int> q;
bool leap_year(int year) {
    if (year % 100 == 0) {
        if (year % 400 == 0) {
            return true;
        } else {
            return false;
        }
    } else if (year % 4 == 0) {
        return true;
    }
    return false;
}
int main() {
    cin >> start >> end_;
    for (int i = start; i <= end_; i++) {
        if (leap_year(i)) {
            q.push(i);
        }
    }
    int size = q.size();
    cout << size << endl;
    
    for (int i = 0; i < size; i++) {
        cout<< q.front()<<" ";
        q.pop();
    }
}