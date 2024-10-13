#include <iostream>
using namespace std;
int n, a[100], ok, cnt;
void init(){
    cnt = 1;
    a[1] = n;
}
void sinh(){
    int i = cnt;
    while(i >= 0 && a[i] == 1){
        --i;
    }
    if(i == 0){
        ok = 0;
    }
    else{
        a[i]--;
        int d = cnt - i + 1;
        cnt = i;
        int q = d / a[i];
        int r = d % a[i];
        if(q){
            for(int i = 1; i <= q; i++){
                ++cnt;
                a[cnt] = a[i];
            }
        }
        if(r){
            ++cnt;
            a[cnt] = r;
        }
    }
}
int main(){
    cin>>n;
    init();
    ok = 1;
    while(ok){
        for(int i = 1; i <= cnt; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        sinh();
    }
}