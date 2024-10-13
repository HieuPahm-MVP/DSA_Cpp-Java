#include <bits/stdc++.h>
using namespace std;
//Cân bằng nguyên tố: 
//Tổng các phần tử bên trái và bên phải của chỉ số i là số nguyên tố
int nt(int n){
    for(int i =2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return n > 1;
}
int main(){
    int n; cin>>n;
    int a[n];
    int sum =0;
    for(int &x : a){
        cin>>x;
        sum += x;
    }
    int sum_left = a[0];
    for(int i = 1; i < n; i++){
        int sum_right = sum - sum_left - a[i];
        if(nt(sum_left) && nt(sum_right)){
            cout<<i<<' '<<endl;
        }
        sum_left += a[i];
    }
}