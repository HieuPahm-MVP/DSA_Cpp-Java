#include <bits/stdc++.h>
using namespace std;
//Kiểm tra xem trong mảng số nào là số fibonanci
using ll = long long;
ll F[100];
void fibo(){
    F[0] = 0;
    F[1] = 1;
    for(int i = 2; i < 93; i++){
        F[i] = F[i - 1] + F[i - 2];
    }
}
int  find(int x){
    for(int i = 0; i < 93; i++){
        if(x == F[i]) return 1;
    }
    return 0;
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int &x : a) cin>>x;
    for(int x : a){
        if(find(x)) cout<<x<<' ';
    }
}