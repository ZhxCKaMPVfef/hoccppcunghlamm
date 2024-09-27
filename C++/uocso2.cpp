#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, uocso = 1,i,tam;

bool snt(ll n) {
    if (n < 2) return false;
    for (i = 2; i<=sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    ifstream fin("UOCSO2.inp");
    ofstream fout("UOCSO2.out");
    fin >> n;

    for ( i = 2; i <= pow(n, 1.0 / 3); i++)// xài căn bậc 3 nó sẽ chạy nhanh hơn theo codelearn
     {
         tam = 0;
        while (n % i == 0) {
            n /= i;
            tam++;
        }
        uocso *= (tam + 1);
    }

    if (snt(n)) uocso *= 2;
    else if (snt(sqrt(n))) uocso *= 3;
    else if (n != 1) uocso *= 4;

    fout << uocso;

    return 0;
}
