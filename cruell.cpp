#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long bignum[100001];
unsigned long long i,t,n,d,p,s;
bignum a;
void nhan(bignum a, unsigned long long  b, bignum c) {
  long long  nho,i;
    nho = 0;
    bignum t;
    t[0] = a[0];
    for(i=1;i<=t[0];i++){
        nho = a[i]*b+nho;
        t[i] = nho%10;
        nho/=10;
    }
    while(nho>0) {
        t[0]++;
        t[t[0]] = nho%10;
        nho/=10;
    }
    while(t[0] > 1 && t[t[0]] ==0) t[0]--;
    memset(c,0,sizeof(bignum));
   // for(i=t[0];i>=1;i--) cout<<t[i];
   for(i=0;i<=t[0];i++) c[i] = t[i];
}
int main(){

    //ifstream fin("cruell.inp");
   // ofstream fout("cruell.out");
     cin>>n>>p;
     for(i=1;i<=p;i++) {
        nhan(a,n,a);
     }
    for(i=a[0];i>=1;i--){
        cout<<a[i];
        d++;
        if(d==70) {
            cout<<endl;
            d = 0;
        }
    }
}
