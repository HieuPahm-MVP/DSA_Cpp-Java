// Một máy ATM hiện có n (n ≤ 30) tờ tiền có giá trị t[1], t[2], ..., t[n]. Hãy tìm cách
// trả ít tờ nhất với số tiền đúng bằng S (các tờ tiền có giá trị bất kỳ và có thể bằng
// nhau, mỗi tờ tiền chỉ được dùng một lần).
// In ra số tờ tiền ít nhất phải trả, nếu không thể tìm được ra kết quả thì in -1.
#include <bits/stdc++.h>
using namespace std;
int n,s,sum = 0,a[500],x[500],res = 1e9;
void ql(int i, int bd, int sum){
    for(int j = bd; j <= n;j++){
        if(sum + a[j] <= s){
            x[i] = a[j];
            if(sum + a[j] == s){
                res = min(res,i);
            }
            else ql(i + 1, bd + 1, sum + a[j]);
        }
        else return;
    }
}
int main(){
    cin>>n>>s;
    for(int i =0; i < n; i++){
        cin>>a[i];
    }
    sort(a + 1, a + n + 1);
    ql(1,1,0);
    if(res = 1e9) cout<<"-1";
    else cout<<res;
}