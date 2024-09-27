#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,i,k,s,d,a[1000001];

int main()
{
    ifstream fin("minpoint.inp");
    ofstream fout("minpoint.out");
    fin>>n;
    for(i=1;i<=n;i++){
       fin>>(a[i]);
    }
    for(i=2;i<=n-1;i++){
        if(a[i]<a[i+1]&&a[i]<a[i-1]) d++;
    }
    fout<<d;
    fin.close();
    fout.close();
    return 0;
}
