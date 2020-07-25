#include <iostream>
using namespace std;
bool p[101];
int a;
int main()
{
    for (int i = 1; i <= 3; i++)
    {
        cin >> a;
        p[a] = true;
    }
    for(int i = 0;i<=100;i++){
        if(p[i]){
            cout<<i<<" ";
        }
    }
}