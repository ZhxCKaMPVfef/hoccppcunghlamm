#include<fstream>
using namespace std;
long long int i,n,d,a[1000001];
int main ()
{
    ifstream fin("DUAXE.INP");
    ofstream fout ("DUAXE.OUT");
    fin>>n;
    for (i-0;i<=n;i++)
    fin>>a[i];
    for (i=1;i<=n;i++)
        if(a[i]>a[i-1]&&a[i]>=a[i+1])
        d++;
    fout<<d;
    fin.close();
    fout.close();
    return 0;

}
