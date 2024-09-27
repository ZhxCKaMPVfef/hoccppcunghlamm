#include <iostream>
#include <vector>
#define ll long long

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int gcd(int a, int b) {
    int d = 0;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
        d += 1;
    }
    return d;
}

using namespace std;

int main() {
    vector<int> A;
    ll t, n, k, tam = 1, d = 0;

    cin >> t;

    while (tam <= t) {
        d = 0;
        cin >> n >> k;

        A.clear(); // Xóa vector để tránh lưu trữ giá trị từ các vòng lặp trước đó

        for (int i = 1; i <= n; i++) {
            int s;
            cin >> s;
            A.push_back(s);
        }

        for (int i : A) {
            if ((gcd(i, n) < k)) {
                d++;
            }
        }

        cout << "Case #" << tam << ": " << d << endl;
        tam++;
    }

    return 0;
}

