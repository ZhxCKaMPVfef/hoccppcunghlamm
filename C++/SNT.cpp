#include<fstream>
using namespace std;
long long int n,i,a[100000006],f[10000006],j,d;
int main()
{
    ifstream fin ("SNT.INP");
    ofstream fout ("SNT.OUT");
    fin>>n;
    for (i=1;i<=n;i++)
    fin>>a[i];
    f[1]=1;
    for(i=2;i<=1000;i++)
        if (f[i]==0)
         for (j=i*i;j<=1000000;j+=i)
           f[j]=1;
    for (i=1;i<=n;i++)
        if (a[i]>0&&f[a[i]]==0)
           d++;
    fout<<d<<endl;
    for (i=1;i<=n;i++)
        if (a[i]>0&&f[a[i]]==0)
         fout<<a[i]<<" ";

}
