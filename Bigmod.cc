#include "iostream"
#include "cstdio"
#include "cmath"
using namespace std;
long bigmod(long b,long p,long m)
{
  if(p == 0 )
    return 1;
  else if(p % 2 == 0)
    return  (long)sqrt(bigmod(b,p/2,m)) % m; //sqrt(x)= x*x
  else
    return (b % m) * bigmod(b,p-1,m) % m;
}
int main()
{
  cout << bigmod(3,3,5);
  return 0;
}
