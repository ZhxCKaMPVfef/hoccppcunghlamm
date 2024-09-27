#include <bits/stdc++.h>

using namespace std;
long long tam, i, t, n, a[100001], b[100001], check;
int main() {
  cin >> t;
  cin>>n;
  check = n;
  while (tam < t) {
       for (i = 1; i <= n; i++) cin >> a[i];
    for (i = 1; i <= n; i++) {
      b[1] = a[n];
      b[i] = a[check];
      check--;
    }
    for (i = 1; i <= n; i++) {
      if (a[i] == b[i]) {
            if(i==n){
        cout << "YES" << endl;
        }
      } else {
          if(i==n){
        cout << "NO" << endl;
          }
      }
    }
    tam++;
  }

}
