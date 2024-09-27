#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n, d = 0;
    ifstream fin("TSNT.inp");
    ofstream fout("TSNT.out");
    fin >> n;

    vector<ll> a;
    vector<ll> b;

    for (ll i = 2; i * i <= n; i++) {
        ll s = 0;
        while (n % i == 0) {
            n /= i;
            s += 1;
        }
        if (s > 0) {
            d++;
            a.push_back(i);
            b.push_back(s);
        }
    }

    if (n > 1) {
        d++;
        a.push_back(n);
        b.push_back(1);
    }

    fout << d << endl;
    for (ll i = 0; i < d; i++) {
        fout << a[i] << " " << b[i] << endl;
    }

    fin.close();
    fout.close();
    return 0;
}
