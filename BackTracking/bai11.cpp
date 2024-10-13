// Cho dãy số a[] có n phần tử là các số nguyên dương khác nhau từng đôi một. Hãy
// liệt kê tất cả các dãy con có từ 2 phần tử trở lên của dãy a[] thỏa mãn tính chất
// tăng dần. Dãy con tạo được bằng cách lấy ra các phần tử trong dãy a[] nhưng
// vẫn giữ nguyên thứ tự ban đầu. Coi mỗi dãy con như một xâu ký tự với các phần
// tử cách nhau một khoảng trống, hãy liệt kê theo thứ tự từ điển
#include <bits/stdc++.h>
using namespace std;
int n,k,a[500],x[500];
vector<string> v;
void ql(int i, int bd){
    for(int j = bd; j <= n; j++){
        if(a[j] > x[i - 1]){
            x[i] = a[j];
            if(i >= 2){
                string s = "";
                for(int u = 1; u <= i;u++){
                    s += to_string(x[u]) + " ";
                    v.push_back(s);
                }
            }
            ql(i + 1, j + 1);
        }
    }
}
int main(){
    cin>>n;
    for(int i = 1; i <= n;i++){
        cin>>a[i];
    }
    x[0] = 0;
    ql(1,1);
    sort(v.begin(),v.end());
    for(string x : v) cout<<x<<endl;
}