#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define read(x) cin<<int(x)
#define endl "\n"
#define loop(i,n) for(int i=0;i<n;i++)
#define MOD 10000000007
#define scn(str) scanf("%s",str);
#define ptf(str) printf("%s\n",str);
#define readarr(ar,n) for(int i=0;i<n;i++)cin>>ar[i]


typedef long long ll;

int pow(int base,int exp)
{
     int result=1,n=base;
     while(exp)
     {
        if(1&exp)result*=base;
        exp/=2;
        n*=n;
     }
     return result;
}


int main()
{
    int t;cin>>t;
    while(t--)
    {

    }
    return 0;
}