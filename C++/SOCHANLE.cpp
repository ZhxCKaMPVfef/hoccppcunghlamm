#include<bits/stdc++.h>
using namespace std;
long long n,k;
int main()
{
    ifstream fin("sochanle.INP");
    ofstream fout("sochanle.OUT");
    fin>>n>>k;
    long long s;
    if(n%2==0) s =n/2;
    else s = (n/2)+1;
    if(k<=s) fout<<1+((k-1)*2);
    else fout<<(k-s)*2;
    return 0;
}
