#include <iostream>
using namespace std;
//hãy liệt kê các giá trị khác nhau trong mảng theo thứ tự xuất hiện, mỗi giá trị chỉ được liệt kê một lần.
int main(){
    int n;cin>>n;
    int a[n];
    for(int &x : a) cin>>x;
    for(int i = 0; i < n; i++){
        int ok = 0;
        for(int j = i + 1; j < n; j++){
            if(a[j] == a[i]) ok = 1;
        }
        if(!ok) cout<<a[i];
    }
}