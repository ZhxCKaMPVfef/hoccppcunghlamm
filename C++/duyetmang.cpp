#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[1000001],n,i,k,j;
int main()
{
    ll d = 0;
    cin>>n>>k;
    for(i=1;i<=n;i++) cin>>a[i];
    for(i=1;i<=n;i++)
    for(j=i;j<n;j++){
        if(a[i]+a[j]*a[j]==k) d++;
    }
    cout<<d;
    return 0;
}
