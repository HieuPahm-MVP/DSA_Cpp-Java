// Cho dãy số A[] = (a1, a2, .., an) và số tự nhiên K. Hãy đưa ra tất cả các dãy con
// của dãy số A[] sao cho tổng các phần tử của dãy con đó đúng bằng K. Các phần
// tử của dãy số A[] được giả thuyết là nguyên dương và không có các phần tử giống
// nhau. Ví dụ với dãy con A[] = {5, 10, 15, 20, 25}, K = 50 ta có 3 dãy con {5, 10,
// 15, 20}, {5, 20, 25}, {10, 15, 25}.
// Đưa ra tất cả các dãy con của dãy số A[] thỏa mãn yêu cầu bài toán theo thứ tự
// từ điển, trong đó mỗi dãy con được bao bởi các ký tự [, ]. Nếu không có dãy con
// nào thỏa mãn yêu cầu bài toán, hãy đưa ra -1.
#include <bits/stdc++.h>
using namespace std;
int n,s,sum =0, a[500], x[500];
void ql(int i, int bd, int sum){
    for(int j = bd; j <= n; j++){
        x[i] = a[j];
        if(sum + a[j] == s){
            for(int u = bd; u <= i; u++){
                cout<<a[u]<<" "<<endl;
            }
        }
        else if(sum + a[j] < s){
            ql(i + 1, bd + 1, sum + a[j]);
        }
    }
}
int main(){
    cin>>n>>s;
    for(int i =0; i < n; i++){
        cin>>a[i];
    }
    sort(a + 1, a + n + 1);
    ql(1,1,0);
}