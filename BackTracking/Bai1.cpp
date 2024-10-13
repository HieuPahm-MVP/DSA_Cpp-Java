// Xét tất cả các tập hợp các số nguyên dương có các phần tử khác nhau và không
// lớn hơn số n cho trước. Nhiệm vụ của bạn là hãy đếm xem có tất cả bao nhiêu
// tập hợp có số lượng phần tử bằng k và tổng của tất cả các phần tử trong tập hợp
// bằng s? Các tập hợp là hoán vị của nhau chỉ được tính là một. Ví dụ với n = 9, k =
// 3, s = 23, {6, 8, 9} là tập hợp duy nhất thỏa mãn.
#include <bits/stdc++.h>
using namespace std;
int n,k,s,cnt = 0,x[500];
void ql(int i, int bd,int sum){
    for(int j = bd; j <= n; j++){
        x[i] = j;
        if(i == k){
            if(sum + j == s) cnt++;
        }
        else ql(i+1,j + 1, sum + j);
    }
}
int main(){
    cin>>n>>k>>s;
    ql(1,1,0);
    cout<<cnt;
}