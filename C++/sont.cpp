#include<bits/stdc++.h>
using namespace std;
long long int n,i,a[100000006],f[10000006],j,d;
int main()
{
    ifstream fin ("sont.INP");
    ofstream fout ("sont.OUT");
    fin>>n;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0) d=1;
    }
    if(d==1) fout<<"NO";
    else fout<<"YES";
    return 0;
}
