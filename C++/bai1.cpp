#include <bits/stdc++.h>
using namespace std;

long long n,a[1000001],i,j,k,len,Maxlen,sum,ditmemay,d;
int main() {
    ifstream fin("test.inp");
    ofstream fout("test.out");
    fin >> n;
    fin >> k;
    for (i = 1; i <=n; i++) {
        fin >> a[i];
    }
    // Duyệt qua từng phần tử trong mảng
    for (i = 1; i <= n; i++) {
        sum = 0;
        d = 0;
    // Duyệt qua các phần tử từ vị trí i đến cuối mảng
        for (int j = i; j < n; j++) {
            sum += a[j]; // cộng các phần tử dãy con
            d++;
                // Kiểm tra nếu trung bình cộng dãy con hiện tại lớn hơn hoặc bằng k
            if (sum / d >= k) {
                Maxlen = max(Maxlen, d); // Cập nhật maxLength nếu cần
            }
        }
    }
    fout<<Maxlen;
    return 0;
}
