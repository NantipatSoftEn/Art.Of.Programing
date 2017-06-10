#include "cstdio"
#include "cstring"
#include "algorithm"
#include "iostream"
using namespace std;
void get(char *n)
{
        int l=strlen(n);
        sort(n,n+l);
        int k=0,m,i,j,z;

        while(k<l)
        {
                m=k;

                for(i=k; i<l; i++)
                {
                        for(j=k; j<=i; j++)
                                cout<<n[j];

                        cout<<"\n";
                }

                for(z=m+2; z<l; z++)
                        cout<<n[m]<<n[z]<<"\n";

                k++;
        }
}


int main()
{
        char n[100] ="ABC";
        //cin>>n;
        get(n);
        return 0;
}
