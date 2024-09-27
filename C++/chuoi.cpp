#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t,d=1,s,i,tam=1,n,dmax=1;
string a;
int main() {
    cin>>t;
    while(tam<=t){
    cin>>n;
    cin.ignore();
    getline(cin,a);
    d = 1;
    dmax = 1;
        for (i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                d += 1;
                if (d > dmax)
                    dmax = d;
            } else {
                d = 1;
            }
        }

        cout << "Case #"<<tam<<": "<<dmax << endl;

        tam++;
    }

    return 0;
}
