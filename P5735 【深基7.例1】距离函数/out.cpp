#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct point
{
    double x;
    double y;
};
double length = 0;
point points[3];
int main(){
    for(int i=0;i<=2;i++){
        cin>>points[i].x>>points[i].y;
        if(i>0){
            length += sqrt(pow(points[i-1].x - points[i].x,2)+pow(points[i-1].y - points[i].y,2));
        }
    }
    length += sqrt(pow(points[2].x - points[0].x,2)+pow(points[2].y - points[0].y,2));
    printf("%0.2lf",length);
}