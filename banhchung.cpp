//bai 3 tin hoc tre 
//tu 12h10 -> 12h16
#include <bits/stdc++.h>
using namespace std;
long long v[1000001],n,i,m,tam,s;
int main()
{
    ifstream fin("banhchung.inp");
    ofstream fout("banhchung.out");
    fin>>n>>m;
    for(i=1;i<=m;i++) fin>>v[i];
    sort(v+1,v+m+1);
    for(i=1;i<=m;i++)  if(s<m) s+=v[i];
    fout<<s;
    fin.close();
    fout.close();
    return 0;
}
