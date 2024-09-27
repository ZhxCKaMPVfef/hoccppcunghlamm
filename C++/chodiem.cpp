#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll p , s,i,d,n;
int main() {
    for(i=1;i<=6;i++){
        cin>>p>>s;
        n = p - (s-1) * (p/10);
        d+=n;
    }
    cout<<d;
    return 0;
}

