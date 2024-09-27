#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll i, n;

ll tinh(ll n) {
    ll tongcach[1000001] = {0}; // Khởi tạo mảng tongcach với giá trị ban đầu là 0
    ll sotruonghop = 0; // Khởi tạo sotruonghop với giá trị ban đầu là 0
    tongcach = [0]*(n+1);
    for (i = 1; i <= n; i++) {
        ll ab = i * i;
        if (ab <= n) {
            tongcach[ab] = tongcach[ab] + 1;
        }
    }

    for (ll c = 1; c <= n; c++) {
        ll cd = c * c;
        if (cd <= n) {
            sotruonghop = sotruonghop + tongcach[n - cd];
        }
    }
    return sotruonghop;
}

int main() {
    cin >> n;
    cout << tinh(n);
    return 0;
}
