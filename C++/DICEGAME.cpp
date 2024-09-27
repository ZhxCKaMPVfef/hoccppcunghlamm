#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a1,b1,a2,b2,n1,n2,x1,x2;
int main()
{
    cin>>a1>>b1>>a2>>b2>>n1>>n2>>x1>>x2;
    if(a1+b1+a2+b2 > n1+n2+x1+x2) cout<<"1";
    else if(a1+b1+a2+b2 < n1+n2+x1+x2) cout<<"2";
    else cout<<"3";
}
