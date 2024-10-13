#include <iostream>
using namespace std;
//Hãy liệt kê các giá trị xuất hiện trong mảng kèm theo tần suất xuất hiện của các ptu theo thứ tự xuất hiện
//Cách 1: Sử dụng mảng đánh dấu
//Cách 2: Sử dụng Container Map 
int d[1005];
int main(){
    int n; cin>>n;
    int a[n];
    for(int &x : a){
        cin>>x;
        d[x]++;
    }
    for(int i = 0; i < n; i++){
        if(d[a[i]] > 0){
            cout<<a[i]<<" "<<d[a[i]]<<endl;
            d[a[i]] = 0;
        }
    }
}
//C2
int main(){
    int n; cin>>n;
    map<int,int> mp;
    int a[n];
    for(int &x : a){
        cin>>x;
        mp[x]++;
    }
    for(auto it : mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
}