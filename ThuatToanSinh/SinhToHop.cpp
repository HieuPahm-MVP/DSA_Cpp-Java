#include <iostream>
using namespace std;
int n,k, a[1005];
//use BackTracking
void init(){
    for(int i = 1; i<= n; i++){
        a[i] = i;
    }
}
void res(){
    for(int i =1; i <= n; i++){
        cout<<a[i];
    }
    cout<<" ";
}
void Try(int i){
    for(int j = a[i - 1] + 1; j <= n - k + 1; j++){
        a[i] == j;
        if(i == k){
            res();
        }
        else Try(i + 1);
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        init();
        Try(1);
        cout<<"\n";
    }
}