#include "stdio.h"
#include "iostream"
#include <stdlib.h>
#include <string>
#include <sstream>
#include <map>
using namespace std;
long long exponent( long long base, long long power)
{
        long long result = 1;
        for ( long long i = 0; i <  power; i++) {
                result*=base;
        }
        return result;
}
int main(int argc, char const *argv[]) {
        //freopen("input.txt","rb",stdin);
        //freopen("output.txt","w",stdout);
        string n,nsub;
        long long base,cv,nlong,nsum=0;
        map<string, long long> mp;
        /*
            nsub  = sub string
            nlong = convent to int
            map   = cheak A-F
        */
        mp["A"] = 10; mp["B"] = 11; mp["C"] = 12; mp["D"] = 13; mp["E"] = 14; mp["F"] = 15;
        while (cin >> n >> base >> cv)
        {
                for ( long long i = n.size()-1,j=0; i >= 0; i--,j++) {
                        nsub = n.substr(j,1);

                        if(nsub >="A" && nsub <="F")
                                nlong = mp[nsub];
                        else
                                nlong = atoi(nsub.c_str());

                        nsum+= nlong*exponent(base,i);
                }

                string d = "0123456789ABCDEF";
                string res;

                while(nsum > 0)
                {
                        res = d[nsum % cv] + res;
                        nsum /= cv;
                }
                nsum = 0; //reset

                if (res.size() == 0)
                        res = "0";
                for ( long long i = res.size(); i <= 6; i++) {
                        cout << " ";
                }
                if(res.size() > 7)
                        cout << "  ERROR" <<endl;

                else
                        cout << res << endl;
        }

        return 0;
}
