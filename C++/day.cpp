#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, s, i, a[1000001], j, d, check = 1;

int main() {
  cin >> n;
  for (i = 1; i <= n; i++)
    cin >> a[i];
  for (i = 1; i <= n; i++) {
    if (a[i]*a[i+1]<0) {
            if(a[i]<0) d+=1;
            if(a[i+1] < 0 ) d++;
            i++;
            check = 1;
        }
        if(a[i]+a[i+1]==0&&a[i]*a[i+1]==0){
            check = 0;
        }
    }
if(check==1) cout << d << endl;
else cout<<"-1";
    return 0;
}
