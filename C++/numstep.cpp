#include<bits/stdc++.h>
using namespace std;
long long x,y;
int main()
{
    ifstream fi("NUMSTEP.INP");
    ofstream fo("NUMSTEP.OUT");
  fi>>x>>y;
  if((x==y)&&(x%2==0))
  {
      fo<<x+y;
  }
  else  if((x-2==y)&&(x%2==0))
  {
      fo<<x+x-2;
  }
 else  if((x==y)&&(x%2==1))
  {
      fo<<x+x-1;
  }
  else  if((x-2==y)&&(x%2==1))
  {
      fo<<x+x-3;
  }
  else
    {
      fo<<"No number";
  }
}
