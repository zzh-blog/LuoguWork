#include <bits/stdc++.h>
using namespace std;
int m;
double t, s;
int main() {
    cin >> m >> t >> s;
    if (t == 0) {
        cout << 0;
    } else {
        cout << max((m - int(ceil(s/t))), 0);
    }
    return 0;
}