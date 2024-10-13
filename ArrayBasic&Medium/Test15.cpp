#include <bits/stdc++.h>
using namespace std;
//Số lớn thứ nhất và số lớn thứ hai ở trong mảng
int main(){
    int n; cin>>n;
    int a[n];
    for(int &x : a)cin>>x;
    int max1 =0, max2 =0;
    for(int x : a){
        if(x >= max1){
            max2 = max1;
            max1 = x;
        }
        else if(x > max2) max2 = x;
    }
    cout<<max1<<' '<<max2;
}